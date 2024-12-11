from cyaron import *
INF9 = int(1E9)
INF7 = int(1E7)
INF6 = int(1E6)
INF5 = int(1E5)
_t = [0, 5, 5, 5]
D1 = "QWERTYUIOPASDFGHJKLZXCVBNM"
D2 = "qwertyuiopasdfghjklzxcvbnm"
D3 = "0123456789"
for I in range(1, 3 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            s = String.random(1000,charset = D3)
        elif I == 2:
            s = String.random(1000,charset = D2)
        elif I == 3:
            s = String.random(1000,charset = D1+D2+D3)
        test_data.input_writeln(s)
        test_data.output_gen("std.exe")
