import random
import struct
from z3 import Solver, BitVecs, BitVecVal, And, Or
from z3 import sat, is_array, Z3Exception, Z3_UNINTERPRETED_SORT


# Return all the models of formula list of formulas F
# http://stackoverflow.com/questions/11867611/
def get_models(F):
    result = []
    s = Solver()
    s.add(F)
    while True:
        if s.check() == sat:
            m = s.model()
            result.append(m)
            # Create a new constraint the blocks the current model
            block = []
            for d in m:
                # d is a declaration
                if d.arity() > 0:
                    raise Z3Exception(
                        "uninterpreted functions are not suppported")
                # create a constant from declaration
                c = d()
                if is_array(c) or c.sort().kind() == Z3_UNINTERPRETED_SORT:
                    raise Z3Exception(
                        "arrays and uninterpreted sorts are not supported")
                block.append(c != m[d])
            s.add(Or(block))
        else:
            return result


def is_readable(x):
    return And((x & 0xff) >= 0x20, (x & 0xff) < 0x80)


def is_lower_underscore(x):
    return Or((x & 0xff) == 0x5f, And((x & 0xff) >= 0x61, (x & 0xff) <= 0x7a))


def get_combinations(magic, checker):
    # define all constraints
    i, tmp = BitVecs('input temp', 32)
    F = [tmp == ((i << BitVecVal(21, 32)) | (i >> BitVecVal(21, 32))),
         (0xdeadbeef + (0xdeadbeef ^ tmp)) == magic,
         checker(i >> 0),
         checker(i >> 8),
         checker(i >> 16)]

    if magic != 0xf23b7ddb:
        F.append(checker(i >> 24))

    # get all models and retrieve the 32bit combinations
    return [x[x[0]].as_long() for x in get_models(F)]


l = [0x2f5b7b03, 0x4f7b7cbb, 0xb3fb7c7b, 0x0f5b7c73, 0xd3fb7b03,
     0x113b7c3b, 0x913b7b03, 0xd1bb7c9b, 0xf23b7ddb]
combinations = [get_combinations(x, is_lower_underscore) for x in l]

# print 10 random keys
for _ in xrange(50):
    print ''.join(struct.pack('I', random.choice(combinations[x]))
                  for x in xrange(len(combinations)))
