from cyaron import *
_n = [-1,5,5,10]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 1
        elif I == 2:
            n = 2
        elif I == 3:
            n = 50-J+1
        test_data.input_writeln(n)
        for i in range(n):
            s = ""
            for j in range(7):
                if randint(1,2)==1:
                    s += "Y"
                else:
                    s += "N"
            test_data.input_writeln(s)
        test_data.output_gen("std.exe")