from cyaron import *
_n = [-1,6,3,3,3]
_t = [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
INF = int(1e5)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 3
            a = _t[J-1]
        if I == 2:
            n = 10-J+1
            a = [n-1]
            for i in range(1,n+1):
                if i != n-1:
                    a.append(i)
            for i in range(n):
                x = randint(1,n-1)
                y = randint(1,n-1)
                a[x],a[y] = a[y],a[x]
        if I == 3:
            n = 10-J+1
            a = []
            for i in range(1,n+1):
                a.append(i)
            for i in range(n):
                x = randint(0,n-1)
                y = randint(0,n-1)
                a[x],a[y] = a[y],a[x]
        if I == 4:
            n = INF-J+1
            a = []
            for i in range(1,n+1):
                a.append(i)
            for i in range(n):
                x = randint(0,n-1)
                y = randint(0,n-1)
                a[x],a[y] = a[y],a[x]
        test_data.input_writeln(n)
        test_data.input_writeln(a)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
