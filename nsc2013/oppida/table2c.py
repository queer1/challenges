import tables


if __name__ == '__main__':
    big_tables = ['table_415efe_tbl', 'table_4ef23e_tbl', 'table_50c7b8_tbl']

    f_c = open('tables.c', 'w')
    f_h = open('tables.h', 'w')

    # enumerate all tables, but ignore the '_addr' entries
    for tbl in (x for x in dir(tables) if x[:5] == 'table' and x[-1] != 'r'):
        size = 0x10000 if tbl in big_tables else 0x100

        # extract the blob into an array of integers
        buf = [getattr(tables, tbl)[x] for x in xrange(size)]

        # reverse the small tables
        #if not tbl in big_tables:
            #buf = [buf.index(x) for x in xrange(size)]

        # dump the table
        f_c.write('unsigned char %s[0x%x] = {\n' % (tbl[:-4], size))
        f_c.write('\t' + ', '.join('0x%02x' % x for x in buf))
        f_c.write('\n};\n')

        # dump the header
        f_h.write('unsigned char %s[0x%x];\n' % (tbl[:-4], size))
