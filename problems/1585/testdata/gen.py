from cyaron import *
import math
_n = [-1,8,8,8]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J),)
        if I == 1:
            x = randint(0,1e7)
            if J<=3:
                x = int(1e7)-J+1
            test_data.input_writeln(x**2)
        elif I==2:
            # xxy
            y = randint(1,1e3)
            x = randint(1,int(math.sqrt(1e9/y)))
            test_data.input_writeln(x*x*y)
        else:
            # xxy
            y = randint(1,1e5)
            x = randint(1,int(math.sqrt(1e14/y)))
            test_data.input_writeln(x*x*y)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


