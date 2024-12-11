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
            n = 100000
            k = 1
            a = []
            for i in range(n):
                if i>=10 and randint(1,10)==1:
                    a.append(a[randint(0,len(a)-1)])
                else:
                    a.append(randint(-INF,INF))
        if I == 2:
            n = 100000
            k = randint(1,INF9)
            a = []
            for i in range(n):
                if i>=10 and randint(1,10)==1:
                    a.append(a[randint(0,len(a)-1)])
                elif randint(1,3)==1:
                    a.append(randint(-INF,0))
                else:
                    a.append(randint(1,k))
        if I == 3:
            n = 1000
            k = randint(1,INF9)
            a = []
            for i in range(n):
                if i>=10 and randint(1,10)==1:
                    a.append(a[randint(0,len(a)-1)])
                elif randint(1,3)==1:
                    a.append(randint(-INF,0))
                else:
                    a.append(randint(1,INF))
        if I == 4:
            n = 100000
            k = randint(1,INF9)
            a = []
            for i in range(n):
                if i>=10 and randint(1,10)==1:
                    a.append(a[randint(0,len(a)-1)])
                elif randint(1,3)==1:
                    a.append(randint(-INF,0))
                else:
                    a.append(randint(1,INF))
        test_data.input_writeln(n,k)
        test_data.input_writeln(a)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
