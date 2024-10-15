from cyaron import *
_n = [-1,6,4,5]
INF = int(1e9)
_a = [[INF,-INF,0],[INF,INF,INF],[-INF,-INF,-INF],
      [-INF+1,0,INF-1],[INF-1,-INF,-INF],[INF,INF,-INF]]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln(3)
            test_data.input_writeln(_a[J-1])
        if I == 2:
            n = 1000-J+1
            test_data.input_writeln(n)
            x = randint(-INF,INF)
            if J==1:
                x=-INF
            for i in range(n):
                test_data.input_write(x)
            test_data.input_writeln()
        if I == 3:
            n = 1000-J+1
            test_data.input_writeln(n)
            for i in range(n):
                test_data.input_write(randint(-INF,INF))
            test_data.input_writeln()
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


