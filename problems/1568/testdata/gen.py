from cyaron import *
_n = [-1,3,6,6]
INF = 2147483647
IINF = -2147483648

for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln(randint(1,1000),"MiB")
        elif I == 2:
            test_data.input_writeln(randint(1,1000),["KiB","MiB","GiB"][J%3])
        elif I == 3:
            test_data.input_writeln(randint(1,1000),["KB","MB","GB"][J%3])
        test_data.output_gen("std.exe")