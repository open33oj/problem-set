from cyaron import *
_n = [-1,2,2,5,3]
INF = int(1e9)
print("ok")        
for I in range(1,5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J == 1:
                n = 1000
                k = 500
            else:
                n = 33
                k = 22
            a = []
            x = randint(1,INF)
            for i in range(n):
                now = []
                for j in range(n):
                    now.append(x)
                a.append(now)
        if I == 2:
            if J == 1:
                n = 1000
                k = 1
            else:
                n = 33
                k = 1
            a = []
            for i in range(n):
                now = []
                for j in range(n):
                    now.append(randint(1,INF))
                a.append(now)
        if I == 3:
            n = 5
            k = randint(1,2*n-1)
            a = []
            for i in range(n):
                now = []
                for j in range(n):
                    now.append(randint(1,INF))
                a.append(now)
        if I == 4:
            n = randint(1000-50,1000)
            k = randint(1,2*n-1)
            a = []
            for i in range(n):
                now = []
                for j in range(n):
                    now.append(randint(1,INF))
                a.append(now)
        test_data.input_writeln(n,k)
        for i in a:
            test_data.input_writeln(i)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
