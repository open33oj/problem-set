from cyaron import *
INF9 = int(1E9)
_t = [0, 4, 4, 4]
for I in range(1, 3 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 1
            seed = randint(1,INF9)
            p = randint(1,INF9)
        elif I == 2:
            n = 1000
            seed = randint(1,INF9)
            p = randint(1,INF9)
        elif I == 3:
            n = 5000000
            if J <= 2:
                seed = randint(1,INF9)
                p = randint(1,INF9)
            else:
                p = randint(1,INF9)
                seed = randint(1,INF9//p)*p
        test_data.input_writeln(n,seed,p)
        test_data.output_gen("std.exe")
