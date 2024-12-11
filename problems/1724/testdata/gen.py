from cyaron import *
T = 10
for I in range(1, T+1):
    test_data = IO(file_prefix="{}".format(I))
    if I <= 6:
        test_data.input_writeln(I)
    elif I <= 8:
        test_data.input_writeln(randint(10,15))
    else:
        test_data.input_writeln(randint(100,1000))
    test_data.output_gen("std.exe")