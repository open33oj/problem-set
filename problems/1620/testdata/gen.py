from cyaron import *
_n = [-1,5,5,5,5]
print("ok")        
INF14 = int(1e14)
INF7 = int(1e7)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I==1:
            if J == 1:
                l=0
                r=INF7
            elif J == 2:
                l = randint(0,1000)
                r = INF7-randint(0,1000)
            else:
                l = randint(0,INF7)
                r = randint(0,INF7)
                if l>r:
                    l,r=r,l
            test_data.input_writeln(l,r)
        if I ==2:
            if J == 1:
                l=INF14
            elif J == 2:
                l = INF14-randint(0,int(1e8))
            else:
                l = randint(0,INF14)
            r=l
            test_data.input_writeln(l,r)
        if I == 3:
            if J == 1:
                l = INF14
            elif J == 2:
                l = INF14-randint(0,int(1e8))
            else:
                l = randint(0,INF14-randint(0,int(1e8)))
            r=randint(l,l+int(1e7))
            test_data.input_writeln(l,r)
        if I == 4:
            if J == 1:
                l=0
                r=INF14
            elif J == 2:
                l = randint(0,1000)
                r = INF14-randint(0,1000)
            else:
                l = randint(0,INF14)
                r = randint(0,INF14)
                if l>r:
                    l,r=r,l
            test_data.input_writeln(l,r)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
