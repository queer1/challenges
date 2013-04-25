import sys


def killit(table, output):
    # all the tree nodes
    tree_nodes = [x.strip() for x in open('tree_nodes.txt')]

    # counter for tree nodes, counts to four and then we're good for some
    # bruteforcing
    treelst = {}
    order = []

    print """
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include "tables.h"

int main(int argc, char *argv[])
{
    uint32_t %s;
        """ % ', '.join('%s = 0x%02x' %
                        (output[x], ord(sys.argv[1][x*2:x*2+2].decode('hex')))
                        for x in xrange(16))

    print 'uint32_t %s;' % ', '.join(x[3] for x in table if not x[3] in output)
    print 'uint32_t %s;' % ', '.join('var_0061700%x_0' % x for x in xrange(16))

    for r, r0, t, w in table:
        if r in tree_nodes:
            treelst[r] = treelst.get(r, []) + [(r, r0, t, w)]
            if len(treelst[r]) == 4:
                order.append(r)

    def print_loop(name):
        del order[order.index(name)]
        print 'for (%s = 0; %s < 0x100; %s++) {' % (name, name, name)
        names = []
        for x in xrange(4):
            _, _, t, w = treelst[name][x]
            print '%s = %s[%s];' % (w, t[:-4], name)
            names.append(w)
        return names

    while len(order):
        # get the first tree node
        last = order[-1]

        # print the first loop
        names = print_loop(last)
        print 'printf("%%d\\r", %s);fflush(stdout);' % last
        indices = [last]

        # print the second loop
        w = treelst[last][0][3]
        for r, r0, _, w2 in table:
            if r == w or r0 == w:
                y = r0 if r == w else r
                #print r, r0, w, y, w2
                indices.append([_[0] for _ in table if y == _[3]][0])
                print_loop(indices[-1])
                break

        # print the third and fourth loop
        for r, r0, _, w3 in table:
            if r == w2 or r0 == w2:
                y = r0 if r == w2 else r
                #print r, r0, w2, y, w3

                a, b, = [_[:2] for _ in table if y == _[3]][0]
                #print a, b
                indices.append([_[0] for _ in table if a == _[3]][0])
                print_loop(indices[-1])
                indices.append([_[0] for _ in table if b == _[3]][0])
                names += print_loop(indices[-1])

        names2, names3, names4 = [], [], []

        # print the first layer stuff
        for r, r0, t, w in table:
            if r in names or r0 in names:
                if not r0:
                    raise Exception('???')
                print '%s = %s[(%s << 8) + %s];' % (w, t[:-4], r0, r)
                names2.append(w)

        # print the second layer stuff
        for r, r0, t, w in table:
            if r in names2 or r0 in names2:
                if not r0:
                    raise Exception('???')
                print '%s = %s[(%s << 8) + %s];' % (w, t[:-4], r0, r)
                names3.append(w)

        # print the last layer
        print 'if(1',
        for r, r0, t, w in table:
            if r in names3 or r0 in names3:
                if r0:
                    raise Exception('???')
                print '&& %s == %s[%s]' % (w, t[:-4], r),
        print ') {'
        print 'printf("%d %d %d %d\\n",', ', '.join(indices), ');'
        print 'fflush(stdout);'
        r = 'L_%d' % len(order)
        print 'goto %s;}}}}}\n%s:' % (r, r)
    print 'printf("%s\\n", %s);' % ('%02x' * 16,
                                    ', '.join('var_0061700%x_0' % x
                                              for x in xrange(16)))
    print '}'
