from cyaron import *
N = 1000
M = 999
AI = int(1E9)
T = 5
a = []
for i in range(N):
    a.append(randint(1,AI))
for I in range(1, T+1):
    test_data = IO(file_prefix="{}".format(I))
    n = N * I // T
    m = M * I // T
    test_data.input_writeln(n,m)
    for i in range(n):
        test_data.input_write(a[randint(0,N-1)])
    test_data.input_writeln()
    for i in range(m):
        test_data.input_write(a[randint(0,N-1)])
    test_data.input_writeln()
    test_data.output_gen("std.exe")