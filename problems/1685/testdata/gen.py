from cyaron import *
N = 100000
T = 5
a = []
for i in range(1,N+1):
    a.append(i)
for I in range(1, T+1):
    test_data = IO(file_prefix="{}".format(I))
    n = N * I // T
    test_data.input_writeln(n)
    for i in range(n):
        x = randint(0,n-1)
        y = randint(0,n-1)
        a[x],a[y] = a[y],a[x]
    for i in range(n):
        test_data.input_write(a[i])
    test_data.input_writeln()
    for i in range(n):
        x = randint(0,n-1)
        y = randint(0,n-1)
        a[x],a[y] = a[y],a[x]
    for i in range(n):
        test_data.input_write(a[i])
    test_data.input_writeln()
    test_data.output_gen("std.exe")