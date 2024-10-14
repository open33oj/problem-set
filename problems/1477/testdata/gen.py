from cyaron import *

for I in range(1, 4):
    for J in range(1,6):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            x = 2
            if J == 1:
                y = 1
            elif J == 2:
                y = 3
            elif J == 3:
                y = 4
            elif J == 4:
                y = 10
            else:
                y = 15
        elif I == 2:
            x = randint(1,5)
            y = randint(1,5)
        else:
            if J == 1:
                x = 15
                y = 15
            elif J == 2:
                x = 15
                y = 14
            else:
                x = randint(10,15)
                y = randint(10,15)
        test_data.input_writeln(x,y)
        test_data.output_gen("std.exe")
