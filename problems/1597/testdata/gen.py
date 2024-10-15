from cyaron import *

_n = [-1,4,4,4,4]
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J),)
        if I == 1:
            if J == 1:
                test_data.input_writeln(1,1)
            elif J==2:
                test_data.input_writeln(100000000,100000000)
            else:
                x = randint(1,100000000)
                test_data.input_writeln(x,x)
        elif I==2:
            if J == 1:
                test_data.input_writeln(1,4)
            elif J==2:
                test_data.input_writeln(100000000-3,100000000)
            else:
                x = randint(4,100000000)
                test_data.input_writeln(x-3,x)
        elif I==3: 
            if J == 1:
                test_data.input_writeln(1,100000)
            else:
                test_data.input_writeln(randint(1,10000),randint(90000,100000))
        else:
            if J <= 2:
                test_data.input_writeln(randint(1,10000),randint(100000000-10000,100000000))
            else:
                x = randint(1,100000000)
                y = randint(1,100000000)
                if x > y:
                    x, y = y, x
                test_data.input_writeln(x, y)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


