from cyaron import *

cnt = [-1,5,5,5]
for I in range(1, 4):
    for J in range(1,cnt[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = J * 2 - 1
        elif I == 2:
            n = randint(1,1E9)
        else:
            n = randint(1,1E18)
        test_data.input_writeln(n)
        test_data.output_gen("std.exe")
