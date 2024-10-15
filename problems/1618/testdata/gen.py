from cyaron import *
_n = [-1,3,5,5,7]
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J == 1:
                n = 9
            elif J == 2:
                n = 10
            elif J == 3:
                n = 11
            m = 3
            T = 1
            test_data.input_writeln(n,m,T)
            test_data.input_writeln(1,2)
            test_data.input_writeln(2,1)
            test_data.input_writeln(10,5)
            test_data.input_writeln(3)
        if I == 2:
            n = 5000000 # 钦定 500 万血
            m = 100000
            T = 1
            test_data.input_writeln(n,m,T)
            a = []
            b = []
            for i in range(m):
                a.append(randint(1,1000))
            for i in range(m):
                b.append(randint(1,int(1e9)))
            b.sort()
            if J!=1:
                for i in range(20):
                    x = randint(0,m-1)
                    y = randint(x,min(x+100,m-1))
                    b[x],b[y] = b[y],b[x]
            for i in range(m):
                test_data.input_writeln(a[i],b[i])
            test_data.input_writeln(1)
        if I == 3:
            n = 5000000 # 钦定 500 万血
            m = 100000
            T = 100000
            a = []
            b = []
            for i in range(m):
                a.append(randint(1,1000))
            for i in range(m):
                now = randint(1,int(1e9))
                b.append(now)
            if J>=5:
                all = sum(a)
                n = all - all//5
            test_data.input_writeln(n,m,T)
            b.sort()
            for i in range(1,len(b)-1):
                if b[i]<=b[i-1]:
                    b[i] = b[i-1]+1
            for i in range(m):
                test_data.input_writeln(a[i],b[i])
            for i in range(T):
                test_data.input_writeln(i+1)
        if I == 4:
            n = 5000000 # 钦定 500 万血
            m = 100000
            T = 100000
            a = []
            b = []
            for i in range(m):
                a.append(randint(1,1000))
            for i in range(m):
                b.append(randint(1,int(1e9)))
            b.sort()
            if J>=5:
                all = sum(a)
                n = all - all//5
            test_data.input_writeln(n,m,T)
            if 3 <= J and J <=5:
                for i in range(20):
                    x = randint(0,m-1)
                    y = randint(x,min(x+100,m-1))
                    b[x],b[y] = b[y],b[x]
            for i in range(m):
                test_data.input_writeln(a[i],b[i])
            for i in range(T):
                test_data.input_writeln(i+1)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
