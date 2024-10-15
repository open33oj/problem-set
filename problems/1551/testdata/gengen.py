from cyaron import *
_n = [-1,2,9,9]
INF = 2147483647
IINF = -2147483648

for I in range(1, 11):
    print(I)
    test_data = IO(file_prefix="{}".format(I))
    test_data.input_writeln(I-1)
    test_data.output_gen("std.exe")
# 语法周赛随意一点了