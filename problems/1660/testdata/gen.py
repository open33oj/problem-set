from cyaron import *
_n = [-1,4,2,3,3]
N = int(5e5)
INF5 = int(1e8)
INF9 = int(1e9)
INF10 = int(1e10)
INF18 = int(1e16)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 1
            if J == 1:
                a = [1]
            elif J == 2:
                a = [33]
            elif J == 3:
                a = [int(1E9)]
            elif J == 4:
                a = [int(1E9)-33]
        if I == 2:
            n = N - J + 1
            a = []
            for i in range(n):
                a.append(1)
        if I == 3:
            n = N - J + 1
            if J == 1:
                x = []
            if J == 2:
                x = [33]
            if J == 3:
                x = [33,34,35]
            a = []
            for i in range(n):
                now = randint(1,1000)
                while now in x:
                    now = randint(1,1000)
                a.append(now)
        if I == 4:
            n = N - J + 1
            a = []
            for i in range(n):
                a.append(randint(1,INF9))
        test_data.input_writeln(n)
        test_data.input_writeln(a)
        test_data.output_gen("std.exe")