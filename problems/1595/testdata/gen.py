from cyaron import *
_n = [-1,3,5,12]
INF = int(1e9)
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            x = randint(90,100)
            n = 0
            m = randint(0,100)
            a = []
            for i in range(m):
                a.append(randint(0,x-1))
            now = x
            for i in range(m):
                while now-a[i]<=0:
                    n+=1
                    if n == 1:
                        now = x
                    else:
                        now = min(x,now + x//3)
                now-=a[i]
            test_data.input_writeln(x,n,m)
            test_data.input_writeln(a)
        if I == 2:
            if J == 1:
                test_data.input_writeln(1,100,1)
                test_data.input_writeln(0)
            if J == 2:
                test_data.input_writeln(1,100,1)
                test_data.input_writeln(1)
            if J == 3:
                test_data.input_writeln(1,100,1)
                test_data.input_writeln(2)
            if J == 4:
                test_data.input_writeln(1,100,1)
                test_data.input_writeln(int(1e9))
            if J == 5:
                test_data.input_writeln(1,100,0)
        if I == 3:
            x = randint(90,100)
            n = 0
            m = randint(0,100)
            a = []
            for i in range(m):
                a.append(randint(0,x-1))
            now = x
            for i in range(m):
                while now-a[i]<=0:
                    n+=1
                    if n == 1:
                        now = x
                    else:
                        now = min(x,now + x//3)
                now-=a[i]
            if J % 3 == 0:
                test_data.input_writeln(x,n,m)
            elif J % 3 == 1:
                test_data.input_writeln(x,n-1,m) # 我真坏
            else:
                test_data.input_writeln(x,n-min(n,10),m) # 我真坏
            test_data.input_writeln(a)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了
# 回头再来看榜单加强了

