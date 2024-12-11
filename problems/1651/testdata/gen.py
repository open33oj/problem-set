from cyaron import *
_n = [-1,5,5,5,5]
N = int(1e6)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 5000
            m = randint(1,100)
            id = []
            for i in range(1,n+1):
                id.append(i)
            for i in range(n):
                x = randint(0,n-1)
                y = randint(0,n-1)
                id[x],id[y] = id[y],id[x]
            lr = []
            for i in range(2*m):
                lr.append(id[i])
            lr.sort()
        if I == 2:
            n = 5000
            m = 1000
            lr = []
            for i in range(m):
                x = randint(1,n)
                lr.append(x)
                lr.append(x)
        if I == 3:
            n = 5000
            m = 1000
            lr = []
            for i in range(m):
                x = randint(1,n)
                lr.append(1)
                lr.append(x)
        if I == 4:
            n = 5000
            m = 1000
            lr = []
            for i in range(m):
                x = randint(1,n)
                y = randint(1,n)
                if x>y:
                    x,y=y,x
                lr.append(x)
                lr.append(y)
        test_data.input_writeln(n,m)
        for i in range(2*m):
            test_data.input_write(lr[i])
            if i%2==1:
                test_data.input_writeln()
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
