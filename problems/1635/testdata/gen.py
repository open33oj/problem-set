from cyaron import *
_n = [-1,3,5,6,6]
INF = int(2e6)
print("ok")        
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J == 1:
                test_data.input_writeln(33,33)
            elif J == 2:
                test_data.input_writeln(1009,1009)
            elif J == 3:
                test_data.input_writeln(INF,INF)     
        if I == 2:
            n = randint(1,INF)
            k = 1
            test_data.input_writeln(n,k)
        if I == 3:
            k = randint(90,100)
            len = randint(1,(INF//k-1)//2)
            n = (len * 2 + 1) * k
            if J % 2 == 1:
                n += 1
            elif J %2 == 2:
                n -= 1
            test_data.input_writeln(n,k)
        if I == 4:
            k = randint(INF//100-1000,INF//100)
            len = randint(1,(INF//k-1)//2)
            n = (len * 2 + 1) * k
            if J % 2 == 1:
                n += 1
            elif J %2 == 2:
                n -= 1
            test_data.input_writeln(n,k)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
