from cyaron import *

_t = [0, 4, 6, 4]
a  = [0,"3333","3033","3313","0333","0330","1234"]
for I in range(1, 3 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = randint(100,500)*2-J
            s = ""
            for i in range(n):
                s=s+"3"
        elif I == 2:
            n = 4
            s = a[J]
        elif I == 3:
            n = randint(900,1000)
            s = ""
            for i in range(n):
                if randint(1,2) == 1:
                    s=s+"3"
                else:
                    s=s+str(randint(0,9))
        test_data.input_writeln(n)
        test_data.input_writeln(s)
        test_data.output_gen("std.exe")
