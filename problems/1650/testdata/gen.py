from cyaron import *
_n = [-1,4,4,4,4]
N = int(1e3)
INF = int(1e18)
INF9 = int(1e9)
print("ok")   
e = []
for i in range(1,1001):
    for j in range(i+1,1001):
        e.append([i,j])
mm = len(e)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 1000
            m = 0
            a = []
            for i in range(n):
                a.append(randint(1,INF9))
            test_data.input_writeln(n,m)
            test_data.input_writeln(a)
        if I == 2:
            n = 1000
            m = 999
            a = [33,21]
            now = 54
            pos = randint(501,n)
            for i in range(3,n+1):
                if i <= 500:
                    x = randint(1,min(now,1000))
                    now += x
                    a.append(x)
                else:
                    if i >= pos:
                        x = min(INF9, now+1)
                    elif i < pos:
                        x = randint(1,min(now,100000))
                        now += x
                    a.append(x)
            test_data.input_writeln(n,m)
            test_data.input_writeln(a)
            for i in range(2,n+1):
                test_data.input_writeln(1,i)
        if I == 3:
            n = 1000
            m = 999
            a = [randint(1,1000)]
            now = a[0]
            for i in range(2,n+1):
                if i <= 50:
                    x=randint(1,min(1000,now))
                    now+=x
                else:
                    x=randint(1,min(INF9,int(now*1.05)))
                    if x<=now:
                        now+=x
                a.append(x)
            test_data.input_writeln(n,m)
            test_data.input_writeln(a)
            for i in range(1,n):
                test_data.input_writeln(i,i+1)
        if I == 4:
            n = 1000
            m = 5000
            a = []
            for i in range(1,n+1):
                a.append(randint(1,INF9//(n-i+1)))
            test_data.input_writeln(n,m)
            test_data.input_writeln(a)
            for i in range(mm):
                x = randint(0,mm-1)
                y = randint(0,mm-1)
                e[x],e[y]=e[y],e[x]
            for i in range(m):
                test_data.input_writeln(e[i])
        test_data.output_gen("std.exe")
