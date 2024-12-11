from cyaron import *
_n = [-1,4,4,4,4]
INF = int(1e18)
INF9 = int(1e9)
print("ok")      
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 1
            a = []
            b = []
            if J == 1:
                a.append(INF)
                b.append(INF)
            if J == 2:
                a.append(INF)
                b.append(INF-33)
            if J == 3:
                x = randint(1,INF)
                a.append(x)
                b.append(x)
            if J == 4:
                a.append(randint(1,INF))
                b.append(randint(1,INF))
        if I == 2:
            n = 5000
            a = []
            b = []
            x = randint(1,INF)
            for i in range(n):
                a.append(x)
                if randint(1,33)==1:
                    b.append(x)
                else:
                    b.append(randint(1,INF))
        if I == 3:
            n = 5000
            a = []
            b = []
            for i in range(n):
                a.append(randint(1,INF)) # 应该不会运气那么背吧，回头std跑个assert检验
                if randint(1,3)==1:
                    b.append(a[i])
                elif i>0 and randint(1,3)==1:
                    b.append(b[randint(0,i-1)])
                elif randint(1,3)==1:
                    b.append(a[randint(0,i)])
                else:
                    b.append(randint(1,INF))
        if I == 4:
            n = 5000
            a = []
            b = []
            x = []
            for i in range(1000):
                x.append(randint(1,INF))
            for i in range(n):
                a.append(x[randint(0,999)])
                if randint(1,10)<=9:
                    b.append(a[i])
                else:
                    b.append(x[randint(0,999)])
        test_data.input_writeln(n)
        test_data.input_writeln(a)
        test_data.input_writeln(b)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
