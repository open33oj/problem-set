from cyaron import *

_n = [-1,5,5,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        n = randint(1,1e4-1e3)
        if I == 1:
            n = randint(50,100)
        elif I == 2:
            n = randint(4500,5000)
        elif I == 3:
            n = randint(1E5-1000,1E5)
        test_data.input_writeln(n)
        test_data.output_gen("std.exe")