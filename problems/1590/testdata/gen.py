from cyaron import *

_n = [-1,5,2,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J),)
        if I == 1:
            n = randint(90,100)
            s = "o"*n
            test_data.input_writeln(n)
            test_data.input_writeln(s)
        elif I==2:
            test_data.input_writeln(1)
            if J == 1:
                test_data.input_writeln("o")
            else:
                test_data.input_writeln("x")           
        else:
            n = randint(90,100)
            m = randint(1,n)
            s = "o"*m
            for i in range(n-m):
                s = s + "ox"[randint(0,1)]
            test_data.input_writeln(n)
            test_data.input_writeln(s)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


