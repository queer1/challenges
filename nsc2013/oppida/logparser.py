import re
import sys


if __name__ == '__main__':
    read_addr0 = read_addr = read_value0 = read_value = None
    table_addr = write_addr = None
    required_tables = []
    var_count = {}

    # when there's a parameter on the command line, then we only dump the
    # addresses of the tables
    get_tables = len(sys.argv) == 2
    is_keygen = len(sys.argv) == 3

    toggle = False
    if not get_tables:
        print 'import hashlib'
        print 'import sys'
        print 'import tables\n\n'
        if not is_keygen:
            print 'if len(sys.argv) != 2 or len(sys.argv[1]) != 32:'
            print '    print "Usage: python %s <hash>" % sys.argv[0]'
        else:
            print 'if len(sys.argv) != 2:'
            print '    print "Usage: python %s <username>" % sys.argv[0]'
        print '    exit(0)\n'

        if not is_keygen:
            print 'input = [ord(x) for x in sys.argv[1].decode("hex")]'
            for x in xrange(16):
                print 'var_0061700%x_0 = input[%d]' % (x, x)
        else:
            print 'input = [0] * 16'
            #print 'output = hashlib.md5(sys.argv[1]).digest()'
            print 'output = sys.argv[1].decode("hex")'
            print 'output = [ord(x) for x in output]'
            print 'def getfirst(tbl, value, large=False):'
            print '    start = 0x1000 if large else 0'
            print '    for x in xrange(start, len(tbl)):'
            print '        if tbl[x] == value:'
            print '            return x'
    print

    statements = []
    for line in sys.stdin:
        if re.search('mov (.*), byte ptr', line):
            if read_addr:
                #print '# special..', read_addr, read_value
                read_addr0 = read_addr
                read_value0 = read_value
            read_addr = re.search('from 0x([0-9a-z]+)', line).group(1)
            read_value = int(re.search('reads (\d+)', line).group(1))
            #print '# read byte/dword ptr', repr(line), '->', read_addr,
            #print read_value
        elif re.search('mov (.*), dword ptr', line):
            table_addr = re.search('from 0x([0-9a-z]+)', line).group(1)
            #print '# table-addr', table_addr, 'read-value', read_value,
            if read_addr0:
                #print 'read-value0', read_value0,
                table_addr = int(table_addr, 16)
                table_addr = table_addr - read_value - read_value0 * 256
            else:
                table_addr = int(table_addr, 16) - read_value

            #print '->', hex(table_addr)
            required_tables.append(table_addr)
        #elif 'push' in line:

        elif re.search('lea (.*), ptr \[(.*)\*4', line):
            if not get_tables:
                table_addr = re.search('\+0x([0-9a-z]+)', line).group(1)
                table_addr = int(table_addr, 16)
            else:
                read_addr = write_addr = None
            #required_tables.append(int(table_addr, 16))
            #print '# jmp table', repr(line), '->', table_addr
        elif re.search('mov byte ptr', line):
            write_addr = re.search('to 0x([0-9a-z]+)', line).group(1)
            #print '# write byte ptr', repr(line), '->', write_addr
        elif re.search('state', line):
            state = line.split(' = ')[1]
            #if not get_tables:
                #print '# state -> %s' % state
        else:
            #print 'unneeded', repr(line)
            pass

        if read_addr and table_addr and write_addr:
            toggle = not toggle
            if toggle:
                read_addr = 'var_' + read_addr
                read_addr += '_' + str(var_count.get(read_addr, 0))

                if read_addr0:
                    read_addr0 = 'var_' + read_addr0
                    read_addr0 += '_' + str(var_count.get(read_addr0, 0))

                write_addr = 'var_' + write_addr
                if write_addr in var_count:
                    var_count[write_addr] += 1
                else:
                    var_count[write_addr] = 0
                write_addr += '_' + str(var_count[write_addr])

                if not get_tables:
                    if not is_keygen:
                        if read_addr0:
                            read_addr = '(%s << 8) + %s' % (read_addr0,
                                                            read_addr)
                            read_addr0 = None

                        print '%s = tables.table_%x_tbl[%s]' % (write_addr,
                                                                table_addr,
                                                                read_addr)
                        #print 'assert output == [%s], output' % state
                    else:
                        if not read_addr0:
                            statements.append(
                                '%s = getfirst(tables.table_%x_tbl, %s)' %
                                (read_addr, table_addr, write_addr))
                        else:
                            statements.append(
                                ('val = getfirst(tables.table_%x_tbl, %s, True)\n' +
                                 '%s = val >> 8\n' +
                                 '%s = val & 0xff') %
                                (table_addr, write_addr, read_addr0,
                                 read_addr))
                            read_addr0 = None
                else:
                    print '0x%08x' % table_addr
                read_addr = table_addr = write_addr = None
                print

    if get_tables:
        print '\n'.join('0x%x' % x for x in required_tables)
    else:
        print
        if not is_keygen:
            output = ['var_0061701%x_%d' % (x, var_count['var_0061701%x' % x])
                      for x in xrange(16)]
            print 'print "".join(chr(x) for x in (%s)).encode("hex")' % \
                  ', '.join(output)
        else:
            print '\n'.join(statements[::-1])
            print 'print "".join(chr(x) for x in input).encode("hex")'
