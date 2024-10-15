from cyaron import *
_n = [-1,1,5,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln(240)     
        elif I == 2:
            if J==1:
                test_data.input_writeln(10)
            else:
                test_data.input_writeln(randint(2,119)*2)
        elif I == 3:
            test_data.input_writeln(randint(1,119)*2-1)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


