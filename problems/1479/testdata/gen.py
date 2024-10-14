from cyaron import *

for I in range(1, 4):
    for J in range(1,6):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        n = randint(25,30)
        test_data.input_writeln(n)
        x = randint(1,n)
        y = randint(1,n)
        for i in range(n):
            s = ""
            for j in range(n):
                if I == 1:
                    if i == x and j == y:
                        s+="*"
                    else:
                        s+="."
                elif I == 2:
                    s+="*.."[randint(0,2)]
                else:
                    s+="##*......"[randint(0,8)]
            test_data.input_writeln(s)
        test_data.output_gen("std.exe")
