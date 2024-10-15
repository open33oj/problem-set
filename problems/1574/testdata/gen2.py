from cyaron import *
a = [
    "c",
    "a",
    "z",
    "x",
    "wotojo",
    "dai",
    "freopen",
    "akioi"
]
for I in range(1, 9):
    test_data = IO(file_prefix="{}".format(I))
    test_data.input_writeln(a[I-1])
    test_data.output_gen("std.exe")
# 语法周赛随意一点了


