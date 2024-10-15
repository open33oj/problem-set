from cyaron import *
all = [33333333,10000000,31245673,85433698,30303030,
       33333330,13333333,96325874,45678923,30000000]
for I in range(1, 11):
    test_data = IO(file_prefix="{}".format(I))
    test_data.input_writeln(all[I-1])
    test_data.output_gen("std.exe")
# 语法周赛随意一点了


