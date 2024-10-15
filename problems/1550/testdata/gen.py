from cyaron import *
_n = [-1,5,5,5]
INF = 2147483647
IINF = -2147483648
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J == 1:
                len = 1
            elif J == 2:
                len = 100
            else:
                len = randint(1,100)
            s = ""
            for i in range(len):
                s = s+'a'
            test_data.input_writeln(s)
        elif I == 2:
            if J == 1:
                len = 2
            elif J == 2:
                len = 100
            else:
                len = randint(1,50)*2
            s = ""
            for i in range(len):
                s = s+chr(ord('a')+randint(0,25))
            test_data.input_writeln(s)
        elif I == 3:
            if J == 1:
                len = 1
            elif J == 2:
                len = 99
            else:
                len = randint(0,49)*2+1
            s = ""
            for i in range(len):
                s = s+chr(ord('a')+randint(0,25))
            test_data.input_writeln(s)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


