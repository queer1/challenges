import sys


if __name__ == '__main__':
    if len(sys.argv) < 5:
        print 'Usage: python %s <binary> <diff> <length> <addr..>' % sys.argv[0]
        exit(0)

    buf = open(sys.argv[1], 'rb').read()
    diff = int(sys.argv[2], 16)
    length = int(sys.argv[3], 16)

    for addr in sys.argv[4:]:
        base = int(addr, 16)-0x400000-diff
        print 'table_%s_tbl =' % addr[2:],
        print ', '.join('0x%02x' % ord(x) for x in buf[base:base+length])
