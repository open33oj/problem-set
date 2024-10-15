from cyaron import *
_n = [-1,10,10,10]
INF = 2147483647
IINF = -2147483648
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 2
            a = randint(0,8)
            b = randint(0,8)
            if J==1:
                m = 0
            elif J==2:
                m = a
            test_data.input_writeln(n,m)
            test_data.input_writeln(randint(m//3,8),randint(m//3,8))
        elif I == 2:
            if J == 1:
                n = 6
                m = 0
            elif J == 2:
                n = 6
                m = 3
            elif J == 3:
                n = 5
                m = 3
            elif J == 4:
                n = 5
                m = 2
            else:
                n = randint(1,6)
                m = randint(1,n)
            test_data.input_writeln(n,m)
            for i in range(n):
                test_data.input_write(1)
            test_data.input_writeln()
        elif I == 3:
            n = randint(5,6)
            a = []
            sumA = 0
            for i in range(n):
                x = randint(0,8)
                a.append(x)
                sumA += x
            m = randint(n//2,sumA//2)
            test_data.input_writeln(n,m)
            test_data.input_writeln(a)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


