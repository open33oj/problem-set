from cyaron import *

_n = [-1,10,1,10]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J),)
        if I == 1:
            test_data.input_writeln(randint((J-1)*10+1,J*10))
        elif I==2:
            test_data.input_writeln(33333333)            
        else:
            base = 33333332
            i = randint((J-1)*10+1,J*10)
            test_data.input_writeln(base + i)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


