from cyaron import *
_n = [-1,4,4,6,6]
N = int(1e6)
INF = int(1e18)
INF9 = int(1e9)
print("ok")      
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 1
            m = N
            k = randint(1,N//33)
            a = []
            for i in range(n):
                a.append([])
                for j in range(m):
                    a[i].append('.')
            if J == 1:
                x1 = 1
                y1 = 3
                x2 = 1
                y2 = m-33
                a[0][0] = '@'
            if J == 2:
                x1 = 1
                y1 = 3
                x2 = 1
                y2 = m-33
                a[0][m//2] = '@'
            if J == 3:
                x1 = 1
                y1 = randint(1,N)
                x2 = 1
                y2 = randint(y1+1,N)
                for i in range(10):
                    a[0][randint(0,y1-1)] = '@'
                for i in range(10):
                    a[0][randint(y2,m-1)] = '@'
            if J == 4:
                x1 = 1
                y1 = randint(1,N)
                x2 = 1
                y2 = randint(y1+1,N)
                for i in range(10):
                    a[0][randint(0,y1-1)] = '@'
                for i in range(10):
                    a[0][randint(y2,m-1)] = '@'
                a[0][randint(y1,y2-2)] = '@'
        if I == 2:
            n = 1000
            m = 1000-J+1
            k = 1
            a = []
            x1 = randint(1,n)
            y1 = randint(1,m)
            x2 = randint(1,n)
            y2 = randint(1,m)
            for i in range(n):
                a.append([])
                for j in range(m):
                    a[i].append('.')
            for i in range(n*m//4):
                x = randint(0,n-1)
                y = randint(0,m-1)
                a[x][y] = '@'
        if I == 3:
            n = 10 ** J
            m = N//n
            k = 1
            a = []
            x1 = randint(1,n)
            y1 = randint(1,m)
            x2 = randint(1,n)
            y2 = randint(1,m)
            for i in range(n):
                a.append([])
                for j in range(m):
                    a[i].append('.')
            for i in range(n*m//10):
                x = randint(0,n-1)
                y = randint(0,m-1)
                a[x][y] = '@'
        if I == 4:
            pass
        if a[x1-1][y1-1] == '@':
            a[x1-1][y1-1]='.'
        if a[x2-1][y2-1] == '@':
            a[x2-1][y2-1]='.'
        test_data.input_writeln(n,m,k)
        test_data.input_writeln(x1,y1,x2,y2)
        for x in a:
            test_data.input_writeln("".join(x))
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
