from cyaron import *
for I in range(1, 11):
    test_data = IO(file_prefix="{}".format(I))
    test_data.input_writeln(I+3)
    test_data.output_gen("std.exe")
# 语法周赛随意一点了


