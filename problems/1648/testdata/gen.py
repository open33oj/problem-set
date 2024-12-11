from cyaron import *
_n = [-1,3,3,5,5]
N = int(1e6)
INF = int(1e18)
INF9 = int(1e9)
print("ok")      
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            points = []
            if J == 1:
                n = 1
                m = 3
            elif J == 2:
                n = 333
                m = 3
            else:
                n = 500
                m = 3
            for i in range(n):
                points.append([randint(2,m-1),randint(2,m-1)])
        if I == 2:
            points = []
            if J == 1:
                n = 1
                m = 10
            elif J == 2:
                n = 1
                m = randint(1,INF9)
            else:
                n = 1
                m = randint(3,INF9)
            for i in range(n):
                points.append([randint(2,m-1),randint(2,m-1)])
        if I == 3:
            points = []
            m = randint(4,5)
            n = randint(1,(m-2)*(m-2))
            for i in range(n):
                points.append([randint(2,m-1),randint(2,m-1)])
        if I == 4:
            points = []
            n = 500
            if J == 1:
                m = INF9
            else:
                m = randint(INF9-100,INF9)
            for i in range(n):
                x = randint(2,m-1)
                y = randint(2,m-1)
                if i == 0 or randint(1,4)==1:
                    pass
                elif randint(1,3)==1:
                    x = points[randint(0,i-1)][0]
                elif randint(1,2)==1:
                    y = points[randint(0,i-1)][1]
                else:
                    pos = randint(0,i-1)
                    x = points[pos][0]
                    y = points[pos][1]
                points.append([x,y])
        test_data.input_writeln(n,m)
        for x in points:
            test_data.input_writeln(x)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
