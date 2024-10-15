from cyaron import *
_n = [-1,5,5,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        t=[]
        if I == 1:
            n = 10000-J+1
            x = randint(1,10000)
            y = randint(1,10000)
            a = randint(10000-1000,10000)
            b = randint(10000-1000,10000)
            if J == 1:
                x = 1
                y = 1
            if J == 2:
                x = 5
                y = 3
            for i in range(n):
                t.append(randint(1,y))
        if I == 2:
            n = 10000-J+1
            x = randint(1,10000)
            y = randint(1,10000)
            a = randint(10000-1000,10000)
            b = a
            if J == 1:
                x = 1
                y = 1
            if J == 2:
                x = 2
                y = 2
            for i in range(n):
                t.append(randint(1,10000))
        if I == 3:
            n = 10000-J+1
            x = randint(1,10000)
            y = randint(1,10000)
            a = randint(10000-1000,10000)
            b = randint(10000-1000,10000)
            if J == 1:
                x = 1
                y = 1
            if J == 2:
                x = 3
                y = 2
            for i in range(n):
                t.append(randint(1,10000))
        test_data.input_writeln(n)
        test_data.input_writeln(x)
        test_data.input_writeln(y,a,b)
        test_data.input_writeln(t)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


