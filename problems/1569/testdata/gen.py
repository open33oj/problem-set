from cyaron import *
_n = [-1,5,5,5]
INF = 2147483647
IINF = -2147483648

for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln(randint(900,1000))
        elif I == 2:
            test_data.input_writeln(randint(1e9-1e7,1e9))
        elif I == 3:
            test_data.input_writeln(randint(1e15-1e9,1e15))
        test_data.output_gen("std.exe")