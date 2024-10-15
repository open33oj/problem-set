from cyaron import *

_n = [-1,3,3,8]
for I in range(1, 3):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J),)
        if I == 1:
            test_data.input_write(String.random(1))
            test_data.input_write(String.random(1))
            test_data.input_write(String.random(1))
            test_data.input_write(String.random(1))
            test_data.input_write(String.random(1))
            test_data.input_writeln()
        elif I==2:
            test_data.input_write(String.random(randint(1,10)))
            test_data.input_write(String.random(randint(1,10)))
            test_data.input_write(String.random(randint(1,10)))
            test_data.input_write(String.random(randint(1,10)))
            test_data.input_write(String.random(randint(1,10)))
            test_data.input_writeln()
        else:
            pass
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


