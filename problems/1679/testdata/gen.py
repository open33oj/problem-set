from cyaron import *
N = 200000
AI = int(1E9)
T = 5
for I in range(1, T+1):
    test_data = IO(file_prefix="{}".format(I))
    n = N * I // T
    test_data.input_writeln(n)
    for i in range(n):
        test_data.input_write(randint(1,AI))
    test_data.input_writeln()
    test_data.output_gen("std.exe")