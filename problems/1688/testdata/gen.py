from cyaron import *
N = 5000
M = 500000
T = 5
for I in range(1, T+1):
    test_data = IO(file_prefix="{}".format(I))
    n = N * I // T
    m = M * I // T
    test_data.input_writeln(n,m)
    a = ""
    b = ""
    for i in range(n):
        a += chr(ord('a')+randint(0,20))
    for i in range(m):
        b += chr(ord('a')+randint(15,25))
    test_data.input_writeln(a)
    test_data.input_writeln(b)
    test_data.output_gen("std.exe")