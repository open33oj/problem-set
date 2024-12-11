from cyaron import *
a = [10,15,20,25,30,35,56,100,964,969]
for I in range(1, 11):
    test_data = IO(file_prefix="{}".format(I))
    test_data.input_writeln(a[I-1])
    test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
