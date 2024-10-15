from cyaron import *
_n = [-1,3,4,3]
INF = 2147483647
IINF = -2147483648
def f(x):
    if 1<=x<=9:
        return True
    if 10<=x<=99:
        return x%10==x//10
    if 100<=x<=999:
        return x%10==x//100
all = []
for i in range(1,1000):
    if f(i):
        all.append(i)
a999 = []
for i in range(1,1000):
    a999.append(i)
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        n = randint(1,1000)
        if I == 1:
            if J==1:
                n=1000
            test_data.input_writeln(n)
            for i in range(n):
                test_data.input_writeln(all[randint(0,len(all)-1)])
        elif I == 2:
            if J==1:
                n=1000
            test_data.input_writeln(n)
            for i in range(n):
                test_data.input_writeln(randint(10,99)*10)
        elif I == 3:
            if J==1:
                test_data.input_writeln(999)
                for i in range(999):
                    test_data.input_writeln(a999[i])
            if J==2:
                test_data.input_writeln(999)
                for i in range(999):
                    x = randint(0,998)
                    y = randint(0,998)
                    a999[x],a999[y] = a999[y],a999[x]
                for i in range(999):
                    test_data.input_writeln(a999[i])
            if J==3:
                test_data.input_writeln(n)
                for i in range(n):
                    test_data.input_writeln(randint(1,999))
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


