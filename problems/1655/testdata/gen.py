from cyaron import *
_n = [-1,3,3,3,3]
INF= int(1e16)
HINF= int(1e8)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            a = randint(1,INF)
            b = 1
            x = randint(a+1,INF)
            y = 1
        if I == 2:
            x = randint(900,1000)
            y = randint(900,1000)
            a = x
            b = y
            while True:
                if a > b:
                    if a-b<=5:
                        break
                    a -= b
                else:
                    if b-a<=5:
                        break
                    b -= a 
        if I == 3:
            x = randint(1,INF)
            y = randint(1,INF)
            a = x
            b = y
            for i in range(1000):
                if a > b:
                    if a-b<=1000:
                        break
                    a -= b
                else:
                    if b-a<=1000:
                        break
                    b -= a 
        if I == 4:
            x = randint(HINF,INF)
            y = randint(HINF,INF)
            if J == 3:
                y = randint(1,10000)
            a = x
            b = y
            while True:
                if a > b:
                    if a%b<=5:
                        break
                    a %= b
                else:
                    if b%a<=5:
                        break
                    b %= a 
        test_data.input_writeln(a,b,x,y)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
