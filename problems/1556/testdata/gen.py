from cyaron import *
_n = [-1,1,4,5]
INF = 2147483647
IINF = -2147483648
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln("1.76 77.2")
        elif I == 2:
            test_data.input_writeln("1",uniform(30,200))
        elif I == 3:
            test_data.input_writeln(uniform(1,3),uniform(30,200))
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


