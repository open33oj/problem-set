from cyaron import *
INF9 = int(1E9)
INF7 = int(1E7)
INF6 = int(1E6)
_t = [0, 4, 4, 4]
for I in range(1, 3 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 1
            L = randint(1,1000)
            s = [randint(0,L)]
            e = [randint(s[0],L)]
        elif I == 2:
            if J == 1:
                n = 1
                L = 1
                s = [0]
                e = [1]
            elif J == 2:
                n = 1
                L = 1
                s = [0]
                e = [0]
            elif J == 3:
                n = 1
                L = 1
                s = [1]
                e = [1]
            elif J == 4:
                n = 2
                L = 1
                s = [1,0]
                e = [1,0]
        elif I == 3:
            n = randint(1,100)
            L = 1000
            x = randint(0,L)
            y = randint(0,L)
            if y < x:
                x,y = y,x
            s = []
            e = []
            for i in range(n):
                s.append(randint(0,x))
                e.append(randint(y,L))
        test_data.input_writeln(n,L)
        for i in range(n):
            test_data.input_writeln(s[i],e[i])
        test_data.output_gen("std.exe")
