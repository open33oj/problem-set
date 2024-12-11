from cyaron import *

_t = [0, 3, 3, 4]
for I in range(1, 3 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        a = randint(201,400)
        b = randint(100,199)
        c = randint(1,99)
        if I == 1:
            x = a
        elif I == 2:
            x = randint(a,400)
        elif I == 3:
            x = randint(c+1,a-1)
        test_data.input_writeln(a,b,c,x)
        test_data.output_gen("std.exe")
