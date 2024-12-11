from cyaron import *
INF9 = int(1E9)
INF7 = int(1E7)
INF6 = int(1E6)
_t = [0, 4, 8, 4]
for I in range(1, 3 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            k = randint(1,20)
            x = 2**k
        elif I == 2:
            k = 3
            x = J
        elif I == 3:
            k = 20
            x = randint(1,2**20)
        test_data.input_writeln(k,x)
        test_data.output_gen("std.exe")
