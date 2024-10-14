from cyaron import *

for I in range(1, 4):
    for J in range(1,6):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            x = 0
            y = (J - 1) * 2
        elif I == 2:
            x = randint(0,9)
            y = randint(0,9-x)
        else:
            x = randint(0,9)
            y = randint(0,9)
        test_data.input_writeln(chr(ord('A')+x),chr(ord('A')+y))
        test_data.output_gen("std.exe")
