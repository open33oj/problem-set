from cyaron import *
_n = [-1,5,4,5,6]
INF = int(1e9)
print("ok")        
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 1
            if J == 1:
                m = 1
                a = [1]
            if J == 2:
                m = 1000000
                a = [33]
            if J == 3:
                m = 1000000
                a = [INF]
            if J == 4:
                m = 333
                a = [333]
            if J == 5:
                m = 333
                a = [332]
        if I == 2:
            m = 1
            if J == 1:
                n = 1
                a = [1]
            if J == 2:
                n = 20
                a = []
                for i in range(n):
                    a.append(randint(1,2))
            if J == 3:
                n = 20 
                a = []
                for i in range(n):
                    if i == 13:
                        a.append(1)
                    else:
                        a.append(randint(1,INF))
            if J == 4:
                n = 20 
                a = []
                for i in range(n):
                    a.append(randint(2,INF))
        if I == 3:
            n = 3
            a = []
            for i in range(n):
                a.append(randint(1,100))
            m = a[0]*a[1]*a[2]
            if J == 1:
                a[1] = randint(m+1,INF)
            if J == 2:
                m -= 1
        if I == 4:
            n = 20
            m = int(1e6)
            a = []
            for i in range(n):
                if J <= 2:
                    a.append(randint(1,2))
                else:
                    a.append(randint(1,int(1e3)))
            if J <= 2:
                m = 1
                for i in range(n):
                    m *= a[i]
                if J == 2:
                    m -= 1
        test_data.input_writeln(n,m)
        test_data.input_writeln(a)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
