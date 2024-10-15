from cyaron import *
for I in range(1, 5):
    for J in range(1, 5):
        test_data = IO(file_prefix="{}".format((I-1)*4+J))
        test_data.input_writeln(I,J)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


