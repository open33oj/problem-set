from cyaron import *
_n = [-1,3,7,6]
_in = [[567,246,578],[864,823,382,729,574,888,977],[340,304,600,803,820,100]]
INF = 2147483647
IINF = -2147483648
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        test_data.input_writeln(_in[I-1][J-1])
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


