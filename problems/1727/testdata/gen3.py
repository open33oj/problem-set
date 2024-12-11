from cyaron import *
INF12 = int(1E12)
INF9 = int(1E9)
INF7 = int(1E7)
INF6 = int(1E6)
INF5 = int(1E5)
_t = [0, 5, 5, 5]
D1 = "QWERTYUIOPASDFGHJKLZXCVBNM"
D2 = "qwertyuiopasdfghjklzxcvbnm"
D3 = "0123456789"
for I in range(1, 3 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = randint(995,1000)
            a = 1
            b = randint(1,n)
        elif I == 2:
            n = randint(995,1000)
            a = randint(90,100)
            b = randint(1,n)
        elif I == 3:
            n = randint(995,1000)
            a = randint(INF12-INF5,INF12)
            b = randint(1,n)
        test_data.input_writeln(n,a,b)
        test_data.output_gen("std.exe")
