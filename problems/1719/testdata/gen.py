from cyaron import *
INF9 = int(1E9)
_t = [0, 4, 4, 4]
x400 = []
for i in range(400):
    x400.append(i+1)
for I in range(1, 3 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = randint(1,1000)
            a = []
            x=randint(1,400)
            for i in range(n):
                a.append(x)
        elif I == 2:
            if J == 1:
                n = 3
            elif J == 2:
                n = 14
            elif J == 3:
                n = 23
            else:
                n = 333
            for i in range(400):
                x = randint(0,399)
                y = randint(0,399)
                x400[x],x400[y] =x400[y],x400[x]
            a = []
            for i in range(n):
                a.append(x400[i])            
        elif I == 3:
            if J != 4:
                n = randint(1,1000)
                a = []
                for i in range(n):
                    a.append(randint(1,400))
            else:
                n = 20
                a = []
                for i in range(6):
                    a.append(400)
                for i in range(9):
                    a.append(300)
                for i in range(5):
                    a.append(200)
        test_data.input_writeln(n)
        test_data.input_writeln(a)
        test_data.output_gen("std.exe")
