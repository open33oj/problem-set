from cyaron import *

_n = [-1,10,5,5,5]
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J),)
        if I == 1:
            test_data.input_writeln(J,0,J)
        elif I==2:
            n = randint(1000000-100,1000000)
            x = 0
            y = n
            test_data.input_writeln(n,x,y)
        elif I==3: 
            if J == 1:
                test_data.input_writeln(20,0,20)
            elif J == 2:
                test_data.input_writeln(20,20,0)
            else:
                n = randint(19,20)
                x = randint(0,n)
                y = randint(0,n)
                while x == y:
                    y = randint(0,n)
                test_data.input_writeln(n,x,y)
        else:
            n = randint(1000000-100,1000000)
            x = randint(0,n)
            y = randint(0,n)
            while x == y:
                y = randint(0,n)
            test_data.input_writeln(n,x,y)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


