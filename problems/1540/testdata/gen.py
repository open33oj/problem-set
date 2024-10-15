from cyaron import *
_n = [-1,2,9,9]
INF = 2147483647
IINF = -2147483648

for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln(randint(-10000,10000),randint(-10000,10000))
        elif I == 2:
            test_data.input_writeln(randint(0,INF),randint(0,INF))
        elif I == 3:
            test_data.input_writeln(randint(-INF,INF),randint(-INF,INF))
        test_data.output_gen("std.exe")
# 语法周赛随意一点了