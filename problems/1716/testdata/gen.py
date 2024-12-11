from cyaron import *
INF9 = int(1E9)
_t = [0, 4, 4, 4]
for I in range(1, 3 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            x = 0
            y = randint(1,200)
        elif I == 2:
            x = randint(1,100)
            y = x
        elif I == 3:
            x = randint(1,100)
            y = randint(1,100)
        test_data.input_writeln(8*x+6*y,16*x+8*y)
        test_data.output_gen("std.exe")
