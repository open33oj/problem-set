from cyaron import *
_n = [-1,5,5,5,5]
INF = int(1e9)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = randint(1,INF)
            m = 1
        if I == 2:
            n = randint(1,INF)
            m = 2
        if I == 3:
            n = 1000
            m = randint(1,100)
        if I == 4:
            n = INF-J+1
            m = randint(1,int(1e6))
        test_data.input_writeln(n,m)
        for i in range(m):
            test_data.input_write(randint(0,n))
        test_data.input_writeln()
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
