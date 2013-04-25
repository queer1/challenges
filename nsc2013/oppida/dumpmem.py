import sys


if __name__ == '__main__':
    if len(sys.argv) < 5:
        print 'Usage: python %s <binary> <diff> <length> <addr..>' % sys.argv[0]
        exit(0)

    buf = open(sys.argv[1], 'rb').read()
    diff = int(sys.argv[2], 16)
    length = int(sys.argv[3], 16)

    print 'buf = open("baboon.exe", "rb").read()'
    print 'class SuperList:'
    print '    def __init__(self, base, end):'
    print '        self.base = base'
    print '    def __getitem__(self, idx):'
    print '        return ord(buf[self.base+idx])'
    for addr in sys.argv[4:]:
        base = int(addr, 16)-0x400000-diff
        print 'table_%s_tbl = SuperList(0x%08x, 0x%08x)' % \
              (addr[2:], base, base+length)
        #print ', '.join('0x%02x' % ord(x) for x in buf[base:base+length])
