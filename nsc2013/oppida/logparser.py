import re
import sys


if __name__ == '__main__':
    read_addr0 = read_addr = read_value0 = read_value = None
    table_addr = write_addr = None
    required_tables = []

    # when there's a parameter on the command line, then we only dump the
    # addresses of the tables
    get_tables = len(sys.argv) == 2

    toggle = False
    if not get_tables:
        print 'import sys'
        print 'import tables\n\n'
        print 'if len(sys.argv) != 2 or len(sys.argv[1]) != 32:'
        print '    print "Usage: python %s <hash>" % sys.argv[0]'
        print '    exit(0)\n'
        print 'input = [ord(x) for x in sys.argv[1].decode("hex")]'
        print 'output = [0] * 16'

    for line in sys.stdin:
        if re.search('mov (.*), byte ptr', line):
            if read_addr:
                print '# special..', read_addr, read_value
                read_addr0 = read_addr
                read_value0 = read_value
            read_addr = re.search('from 0x([0-9a-z]+)', line).group(1)
            read_value = int(re.search('reads (\d+)', line).group(1))
            print '# read byte/dword ptr', repr(line), '->', read_addr,
            print read_value
        elif re.search('mov (.*), dword ptr', line):
            table_addr = re.search('from 0x([0-9a-z]+)', line).group(1)
            print '# table-addr', table_addr, 'read-value', read_value,
            if read_addr0:
                print 'read-value0', read_value0,
                table_addr = int(table_addr, 16)
                table_addr = table_addr - read_value - read_value0 * 256
            else:
                table_addr = int(table_addr, 16) - read_value

            print '->', hex(table_addr)
            required_tables.append(table_addr)
        #elif 'push' in line:

        elif re.search('lea (.*), ptr \[(.*)\*4', line):
            if not get_tables:
                table_addr = re.search('\+0x([0-9a-z]+)', line).group(1)
                table_addr = int(table_addr, 16)
            else:
                read_addr = write_addr = None
            #required_tables.append(int(table_addr, 16))
            print '# jmp table', repr(line), '->', table_addr
        elif re.search('mov byte ptr', line):
            write_addr = re.search('to 0x([0-9a-z]+)', line).group(1)
            print '# write byte ptr', repr(line), '->', write_addr
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
                if re.search('61700', read_addr):
                    read_addr = 'input[%d]' % int(read_addr[-1], 16)
                elif re.search('61701', read_addr):
                    read_addr = 'output[%d]' % int(read_addr[-1], 16)
                else:
                    read_addr = 'var_' + read_addr

                if re.search('61701', write_addr):
                    write_addr = 'output[%d]' % int(write_addr[-1], 16)
                else:
                    write_addr = 'var_' + write_addr

                if read_addr0:
                    if re.search('61701', read_addr0):
                        read_addr0 = 'output[%d]' % int(read_addr0[-1], 16)
                    else:
                        read_addr0 = 'var_' + read_addr0

                    read_addr = '(%s << 8) + %s' % (read_addr0, read_addr)
                    read_addr0 = None

                if not get_tables:
                    print '%s = tables.table_%x_tbl[%s]' % (write_addr,
                                                            table_addr,
                                                            read_addr)
                    #print 'assert output == [%s], output' % state
                else:
                    print '0x%08x' % table_addr
                read_addr = table_addr = write_addr = None
            print

    if get_tables:
        print '\n'.join('0x%x' % x for x in required_tables)
    else:
        print
        print 'print "".join(chr(x) for x in output).encode("hex")'
