from cyaron import *
INF9 = int(1E9)
INF7 = int(1E7)
INF6 = int(1E6)
INF5 = int(1E5)
_t = [0, 10, 5, 5, 5]
for I in range(1, 4 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = J-1
        elif I == 2:
            n = randint(80,99)
        elif I == 3:
            n = randint(900,1000)
        else:
            n = randint(INF5-1000,INF5)
        test_data.input_writeln(n)
        test_data.output_gen("std.exe")
