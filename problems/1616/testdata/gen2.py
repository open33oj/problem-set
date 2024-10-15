from cyaron import *
_n = [-1,2,4,8,8]
INF = int(1e16)
def f(x):
    if x<2:
        return True
    for i in range(2,x):
        if x % i == 0:
            return True
        j = x//i
        if j<i:
            break
    return False
pp = []
now = int(1e8)
for i in range(100):
    while f(now):
        now-=1
    pp.append(now)
    now-=1
print(pp)
pp2 = []
now = int(5e7)
for i in range(100):
    while f(now):
        now-=1
    pp2.append(now)
    now-=1
print(pp2)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I==1:
            test_data.input_writeln(randint(1,int(1e8)), 1, INF)
        if I ==2:
            p = pp[randint(0,99)]
            if J == 1:
                test_data.input_writeln(p,p-1-1,p-1+1)
            if J == 2:
                test_data.input_writeln(p,2*(p-2)+5,2*(p-2)+10)
            if J == 3:
                test_data.input_writeln(p,3*(p-3)-5,3*(p-3)-3)
            if J == 4:
                test_data.input_writeln(2,1,1)
        if I == 3:
            if J <= 4:
                x = pp2[randint(0,99)]
                y = pp2[randint(0,99)]
                if J % 2 == 0:
                    test_data.input_writeln(x+y,x*y,x*y)
                else:
                    test_data.input_writeln(x+y,x*y-1,x*y-1)
            else:
                n = randint(1,int(1e8)//8)
                if J % 2 == 0:
                    test_data.input_writeln(n,J*(n-J),J*(n-J))
                else:
                    test_data.input_writeln(n,J*(n-J)+2,J*(n-J)+2)
        if I == 4:
            if J <= 4:
                x = pp2[randint(0,99)]
                y = pp2[randint(0,99)]
                if J % 2 == 0:
                    test_data.input_writeln(x+y,x*y-randint(1,3),x*y+randint(1,3))
                else:
                    test_data.input_writeln(x+y,x*y+randint(1,3),x*y+randint(5,10))
            else:
                n = randint(1,int(1e8)//8)
                if J % 2 == 0:
                    test_data.input_writeln(n,J*(n-J)-randint(1,3),J*(n-J)+randint(1,3))
                else:
                    test_data.input_writeln(n,J*(n-J)+randint(1,3),J*(n-J)+randint(5,10))
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
