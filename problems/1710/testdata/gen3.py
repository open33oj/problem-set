from cyaron import *
INF9 = int(1E9)
INF7 = int(1E7)
INF6 = int(1E6)
_t = [0, 2, 4, 4]
for I in range(1, 3 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 2
            if J == 1:
                s = "dd"
            else:
                s = "dj"
        elif I == 2:
            n = 1000
            s = ""
            for i in range(n):
                s += chr(ord('a')+randint(0,25))
        elif I == 3:
            n = 100000
            s = ""
            for i in range(n):
                s += chr(ord('a')+randint(0,25))
        test_data.input_writeln(n)
        test_data.input_writeln(s)
        test_data.output_gen("std.exe")
