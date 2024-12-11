from cyaron import *
INF9 = int(1E9)
_t = [0, 4, 4, 4]
for I in range(1, 3 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = [0,998244353,97,100000007,2][J]
        elif I == 2:
            n = randint(500,1000)
        elif I == 3:
            n = randint(2,INF9)
            if J == 4:
                n = 100000007*3
        test_data.input_writeln(n)
        test_data.output_gen("std.exe")
