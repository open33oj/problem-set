from cyaron import *
_n = [-1,5,5,5,5]
INF= int(1e16)
HINF= int(1e8)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 5000 - J + 1
            m = randint(1,10)
            a = [2]
            b = [1]
            for i in range(m-1):
                ai = randint(1,n)
                bi = randint(0,ai-1)
                a.append(ai)
                b.append(bi)
        if I == 2:
            n = 5000 - J + 1
            m = 1
            a=[]
            b=[]
            for i in range(m):
                ai = randint(1,n)
                bi = randint(0,ai-1)
                a.append(ai)
                b.append(bi)
        if I == 3:
            n = 5000 - J + 1
            m = 5-J+1
            a=[]
            b=[]
            for i in range(m):
                ai = randint(1,n)
                bi = randint(0,ai-1)
                a.append(ai)
                b.append(0)
        if I == 4:
            n = 5000 - J + 1
            m = randint(1,100)
            a=[]
            b=[]
            for i in range(m):
                ai = randint(1,n)
                bi = randint(0,ai-1)
                a.append(ai)
                b.append(bi)
        test_data.input_writeln(n,m)
        for i in range(m):
            test_data.input_writeln(a[i],b[i])
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
