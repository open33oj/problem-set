from cyaron import *

_t = [0, 3, 3, 4]
for I in range(1, 3 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        n = randint(5,10)
        m = randint(5,10)
        a = randint(1,10)
        d = randint(1,10)
        dd = randint(1,10)
        if I == 1:
            n = 1
            m = 1
        elif I == 2:
            n = 1
        test_data.input_writeln(n,m,a,d,dd)
        test_data.output_gen("std.exe")
