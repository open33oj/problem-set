from cyaron import *
_n = [-1,2,4,5,4]
INF = int(1e9)
MOD = 2**64
seed = 0
def rnd():
    global seed
    seed = seed * seed + seed + 30
    seed %= MOD
    return seed
for I in range(3, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        seed = randint(1,1e7)
        n = randint(1e7-1e3,1e7)
        m = randint(1e5-5,1e5)
        if I == 2:
            m = 1
        if I == 3:
            n = randint(m-randint(0,10),m)
        a = []
        if I == 1:
            for i in range(m):
                a.append(i+1)
        elif I == 2:
            if J == 1:
                a.append(n)
            elif J == 2:
                a.append(n+1)
            else:
                a.append(n-randint(1,100))
        else:
            a.append(n+1)
            a.append(n+2)
            for i in range(m-2):
                a.append(randint(1,n))
            tim = randint(m//20,m//10)
            for i in range(tim):
                a[randint(0,m-1)] = a[randint(0,m-1)]
        a.sort()
        test_data.input_writeln(seed,n,m)
        j = 0
        for i in range(1,n+5):
            now = rnd()
            if i % 1000000 == 0:
                print(i)
            while j<=m-1 and i == a[j]:
                a[j] = now
                j += 1
        for i in range(m):
            x = randint(0,m-1)
            y = randint(0,m-1)
            a[x],a[y] = a[y],a[x]
        if I == 1:
            test_data.input_writeln(a)
        elif I == 2:
            if J <= 3:
                test_data.input_writeln(a[0])
            else:
                test_data.input_writeln(a[0]+1)
        else:
            tim = randint(m//20,m//10)
            for i in range(tim):
                a[i] += [1,2,-1,-2][randint(0,3)]
            test_data.input_writeln(a)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
