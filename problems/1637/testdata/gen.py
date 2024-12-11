from cyaron import *
_n = [-1,5,5,5,5]
INF = int(2e6)
print("ok")        
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J == 1:
                n = 2
            else:
                n = randint(1,100)*2
            k = 2
            a = []
            b = []
            for i in range(n):
                a.append(randint(1,5000))
            for j in range(n):
                b.append(randint(1,a[j]))
        if I == 2:
            n = randint(2500-100,2500)*2
            k = randint(1,n)
            a = []
            b = []
            for i in range(n):
                a.append(randint(1,5000))
            for j in range(n):
                b.append(a[j])
        if I == 3:
            n = 20
            k = randint(1,n)
            a = []
            b = []
            for i in range(n):
                a.append(randint(1,5000))
            for j in range(n):
                b.append(randint(1,a[j]))
        if I == 4:
            n = randint(2500-100,2500)*2
            k = randint(1,n)
            a = []
            b = []
            for i in range(n):
                a.append(randint(1,5000))
            for j in range(n):
                b.append(randint(1,a[j]))
        test_data.input_writeln(n,k)
        test_data.input_writeln(a)
        test_data.input_writeln(b)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
