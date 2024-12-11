from cyaron import *
_n = [-1,2,3,3,12]
print("ok")        
INF = int(1e9)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I==1:
            n = randint(1,INF)
            m = randint(n+1,INF)
            k = randint(1,1000)
            test_data.input_writeln(n,m,k)
            for i in range(k):
                test_data.input_write(1)
            test_data.input_writeln()
            for i in range(k):
                test_data.input_write(randint(1,n))
            test_data.input_writeln()
        if I ==2:
            if J <=2:
                n = J
            else:
                n = randint(1,INF)
            m = randint(n+1,INF)
            k = 1
            test_data.input_writeln(n,m,k)
            for i in range(k):
                test_data.input_write(m)
            test_data.input_writeln()
            for i in range(k):
                test_data.input_write(randint(1,n))
            test_data.input_writeln()
        if I == 3:
            n = randint(1,INF)
            m = randint(n+1,INF)
            k = randint(3,5)
            test_data.input_writeln(n,m,k)
            for i in range(k):
                if J == 1:
                    test_data.input_write(1)
                else:
                    test_data.input_write(randint(1,3))
            test_data.input_writeln()
            for i in range(k):
                test_data.input_write(n)
            test_data.input_writeln()
        if I == 4:
            k = randint(1,1000)
            a = []
            b = []
            for i in range(k):
                a.append(randint(1,1000))
                b.append(randint(1,1000))
            m = 0
            for i in range(k):
                m += a[i]*b[i]
            n = 0
            for i in range(k):
                n += b[i]
            if J % 4 == 1:
                n += randint(1,1000)
            elif J % 4 == 2:
                n -= randint(1,1000)
            elif J % 4 == 3:
                m -= randint(1,10000)
            test_data.input_writeln(n,m,k)
            test_data.input_writeln(a)
            test_data.input_writeln(b)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
