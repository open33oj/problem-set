from cyaron import *
_n = [-1,5,5,5]
INF = 2147483647
IINF = -2147483648
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln(J,J,J,J)
        elif I == 2:
            a = []
            a.append(randint(1,5))
            a.append(randint(1,5))
            a.append(randint(1,5))
            a.append(randint(1,5))
            a.sort()
            test_data.input_writeln(a)
        elif I == 3:
            a = []
            a.append(randint(1,5))
            a.append(randint(1,5))
            a.append(randint(1,5))
            a.append(randint(1,5))
            test_data.input_writeln(a)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


