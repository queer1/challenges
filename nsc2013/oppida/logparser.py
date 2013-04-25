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
        print 'import tables'
        print 'import utilz\n\n'
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
                        statements.append((read_addr, read_addr0,
                                           table_addr, write_addr))
                        read_addr0 = None
                else:
                    print '0x%08x' % table_addr
                read_addr = table_addr = write_addr = None

    # read the tree nodes
    tree_nodes = [x.strip() for x in open('tree_nodes.txt')]

    # read all nodes into a dictionary for easy lookup
    lookup = dict((write, (read, read0, table, write))
                  for read, read0, table, write in statements)

    # for the keygen, the output variables are known at first
    output = ['var_0061701%x_%d' % (x, var_count['var_0061701%x' % x])
              for x in xrange(16)]

    print 'output =', ', '.join(repr(x) for x in output)
    print

    def walk_node(name, cnt=0):
        if not name in lookup:
            print '# INPUT', name
            return

        r, r0, t, w = lookup[name]

        r_repr = r if not r0 else '(%s << 8) + %s' % (r0, r)
        print '\t'*cnt, '%s = tables.table_%x_tbl[%s]' % (w, t, r_repr)

        walk_node(r, cnt+1)
        if r0:
            walk_node(r0, cnt+1)

        """
        if name in tree_nodes:
            for r, r2, _, w in statements:
                if r == name or r2 == name:
                    walk_node(w, cnt+1)
                    print
        """

    #for x in xrange(16):
    #walk_node(output[0])
    #walk_children('var_00617017_9')
    #walk_children('var_005ec1a8_10')
    #exit(0)

    # copy the output variables into the list of known variables
    known = output[:]

    # if we're making the keygen, then we have to create all statements in
    # reversed order, hence we first have to collect all variables etc.
    #statements = statements[::-1]
    if is_keygen:
        print 'supertable = ['
    for idx, (read, read0, table, write) in enumerate(statements):
        if not read0:
            print '    (%s, None, "table_%x_tbl", %s),' % (repr(read),
                                                           table,
                                                           repr(write))
        else:
            print '    (%s, %s, "table_%x_tbl", %s),' % (repr(read),
                                                         repr(read0),
                                                         table,
                                                         repr(write))
        continue
        if write in tree_nodes or read in tree_nodes:
            print '%s = KILL(tables.table_%x_tbl, %s)' % (read, table, write)
        if not read0:
            print '%s = WITH(tables.table_%x_tbl, %s)' % \
                  (read, table, write)
            print 'print %s, %s.keys()' % (repr(read), read)
        else:
            print '%s, %s = FIRE(tables.table_%x_tbl, %s)' % \
                  (read, read0, table, write)
    if is_keygen:
        print ']'
        print 'utilz.killit(supertable, output)'

    if get_tables:
        print '\n'.join('0x%x' % x for x in required_tables)
    else:
        print
        if not is_keygen:
            print 'print "".join(chr(x) for x in (%s)).encode("hex")' % \
                  ', '.join(output)
        else:
            #print 'print "".join(chr(x) for x in input).encode("hex")'
            pass
