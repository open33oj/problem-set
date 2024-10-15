from cyaron import *
for i in range(1,5):
    print(i)
    test_data = IO(file_prefix="{}".format(i))
    if i == 1:
        test_data.input_writeln("0")
    elif i == 2:
        test_data.input_writeln("9")
    elif i == 3:
        test_data.input_writeln(33*33)
    else:
        test_data.input_writeln(99*99)
    test_data.output_gen("std.exe")