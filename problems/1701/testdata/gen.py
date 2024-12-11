from cyaron import *
INF9 = int(1E9)
_t = [0, 5, 5, 5]
H = "DCHS"
D = "A23456789TJQK"
for I in range(1, 3 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            d1 = randint(1,4)
            d2 = randint(2,9)
            k1 = d1
            k2 = randint(2,9)
        elif I == 2:
            d1 = randint(1,4)
            d2 = randint(2,9)
            k1 = randint(1,4)
            k2 = randint(2,9)
        elif I == 3:
            d1 = randint(1,4)
            d2 = randint(1,13)
            k1 = randint(1,4)
            k2 = randint(1,13)
        test_data.input_writeln(H[d1-1]+D[d2-1]+" "+H[k1-1]+D[k2-1])
        test_data.output_gen("std.exe")
