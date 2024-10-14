from cyaron import *

for I in range(1, 4):
    for J in range(1,6):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        T = randint(95,100)
        test_data.input_writeln(T)
        for i in range(T):
            test_data.input_write(randint(0,100))  
            if I == 1:
                test_data.input_writeln(0)
            elif I == 2:
                test_data.input_writeln(10)
            else:
                test_data.input_writeln(randint(0,10))
        test_data.output_gen("std.exe")
