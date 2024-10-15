from cyaron import *
month = [
    "February",
    "March",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
]
for I in range(1, 11):
    test_data = IO(file_prefix="{}".format(I))
    test_data.input_writeln(month[I-1])
    test_data.output_gen("std.exe")
# 语法周赛随意一点了


