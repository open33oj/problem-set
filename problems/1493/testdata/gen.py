from cyaron import *

_n = [-1,3,3,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 1
            if J == 1:
                a = int(1E9)-1
                b = 1
            elif J == 2:
                a = 1
                b = int(1E9)
            else:
                a = int(1E9)-2
                b = int(1E9)-2
            test_data.input_writeln(n)
            test_data.input_writeln(a,b)
        elif I == 2:
            n = randint(1,100)
            test_data.input_writeln(n)
            for i in range(n):
                a = randint(1,1E6)
                b = randint(a,1E6)
                test_data.input_writeln(a,b)
        elif I == 3:
            n = randint(1,100)
            test_data.input_writeln(n)
            for i in range(n):
                a = randint(1,1E9)
                b = randint(1,1E9)
                test_data.input_writeln(a,b)
        test_data.output_gen("std.exe")