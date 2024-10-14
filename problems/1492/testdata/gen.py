from cyaron import *

_n = [-1,3,3,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            h = randint(8,11)
            m = randint(1,59)
            x = randint(1,m)
        elif I == 2:
            h = randint(8,11)
            m = randint(0,59)
            x = 60
        elif I == 3:
            h = randint(8,11)
            m = randint(0,59)
            x = randint(m,120)
        test_data.input_writeln(h,m,x)
        test_data.output_gen("std.exe")