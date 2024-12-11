from cyaron import *
_n = [-1,2,2,3,5]
N = int(1e2)
INF5 = int(1e8)
INF9 = int(1e9)
INF10 = int(1e10)
INF18 = int(1e16)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = N - J + 1
            a = []
            for i in range(n):
                b = []
                for j in range(n):
                    b.append(0)
                a.append(b)
        if I == 2:
            n = N - J + 1
            a = []
            for i in range(n):
                b = []
                for j in range(n):
                    b.append(n-1)
                a.append(b)
        if I == 3:
            n = 10 - J + 1
            a = []
            for i in range(n):
                b = []
                for j in range(n):
                    if randint(1,n)==1:
                        b.append(randint(1,n-1))
                    elif randint(1,2)==1:
                        b.append(n)
                    else:
                        b.append(0)
                a.append(b)
        if I == 4:
            n = N - J + 1
            a = []
            if J <= 3:
                for i in range(n):
                    b = []
                    for j in range(n):
                        if randint(1,n)==1:
                            b.append(randint(1,n-1))
                        elif randint(1,2)==1:
                            b.append(n)
                        else:
                            b.append(0)
                    a.append(b)
            elif J == 4:
                for i in range(n):
                    b = []
                    for j in range(n):
                        b.append(n//2)
                    a.append(b)
            else:
                for i in range(n):
                    b = []
                    for j in range(n):
                        b.append(randint(n//2,n))
                    a.append(b)
        test_data.input_writeln(n)
        for now in a:
            for x in now:
                if x == n:
                    if randint(1,2)==1:
                        test_data.input_write(randint(INF9-100,INF9))
                    else:
                        test_data.input_write(x)
                else:
                    test_data.input_write(x)
            test_data.input_writeln()
        test_data.output_gen("std.exe")
# 先简单把 bfs 卡完，回头如果有人满分再来试着卡