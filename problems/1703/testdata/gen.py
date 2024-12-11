from cyaron import *
INF9 = int(1E9)
INF7 = int(1E7)
INF6 = int(1E6)
_t = [0, 1, 25, 10]
for I in range(1, 3 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 33
        elif I == 2:
            if J<=20:
                n=J
            else:
                n =randint(34,100)
        elif I == 3:
            n = randint(101,10000)
        test_data.input_writeln(n)
        test_data.output_gen("std.exe")
