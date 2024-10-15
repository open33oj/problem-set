from cyaron import *
_n = [-1,4,1,5]
INF = 2147483647
IINF = -2147483648
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln(1,randint(1,1000))
            test_data.input_writeln(randint(1,1024))
        elif I == 2:
            n = 1000-randint(0,2)
            test_data.input_writeln(n,1)
            for i in range(n):
                test_data.input_write(randint(1,1024))
            test_data.input_writeln()
        elif I == 3:
            n = 1000-randint(0,2)
            test_data.input_writeln(n,randint(1,1000))
            for i in range(n):
                test_data.input_write(randint(1,1024))
            test_data.input_writeln()
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


