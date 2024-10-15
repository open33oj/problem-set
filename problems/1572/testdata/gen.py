from cyaron import *
_n = [-1,10,9,11]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln(3*100+3+(J-1)*10)
        if I == 2:
            test_data.input_writeln(J*111)
        if I == 3:
            test_data.input_writeln(randint(100,999))
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


