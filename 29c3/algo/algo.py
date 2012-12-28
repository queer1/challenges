import struct

v0 = 1024
v1 = 1024
v13 = 1
v14 = 1024
v15 = 1337
v16 = -5

operator_table = [
    lambda a, b: (a + b) % 2**32,
    lambda a, b: (a * b) % 2**32,
    lambda a, b: (a - b) % 2**32,
    lambda a, b: (a / b % 2**32) if b else a,
    lambda a, b: a % b  if a >= b else a,
]

mod_ptr = lambda a, b: a % b

while True:
    v2 = v0 % 2
    v3 = operator_table[v2](v16, v13)
    v16 = v3
    v4 = v3 % 3
    v13 = operator_table[v4](v15, v13)
    v5 = mod_ptr(v15, 4)
    v6 = operator_table[v5](v16, v14)
    v16 = v6;
    v7 = mod_ptr(v6, 5)
    v14 = operator_table[v7](v13, v14)
    v8 = mod_ptr(v13, 2)
    v9 = operator_table[v8](v16, v15)
    v16 = v9
    v10 = mod_ptr(v9, 3)
    v15 = operator_table[v10](v14, v15)
    v0 = v13
    v11 = v14
    v1 -= 1
    v14 = v13
    v13 = v11

    if not v1:
        break

v13 = v11 ^ 0x64DB3314
v14 = v0 ^ 0xBEA70DC6
v15 = v15 ^ 0x22953653

print struct.pack('3I', v13, v14, v15)
