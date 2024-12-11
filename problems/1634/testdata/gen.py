from cyaron import *
_n = [-1,5,5,5,5]
N = int(5e3)
INF = int(1e9)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 4
            test_data.input_writeln(n)
            for i in range(n):
                test_data.input_write(randint(1,INF))
            test_data.input_writeln()
        if I == 2:
            n = N-J+1
            test_data.input_writeln(n)
            for i in range(n):
                test_data.input_write(33)
            test_data.input_writeln()
        if I == 3:
            n = 20
            test_data.input_writeln(n)
            for i in range(n):
                test_data.input_write(randint(1,INF))
            test_data.input_writeln()
        if I == 4:
            n = N-J+1
            test_data.input_writeln(n)
            for i in range(n):
                test_data.input_write(randint(1,INF))
            test_data.input_writeln()
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
