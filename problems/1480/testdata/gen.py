from cyaron import *

cnt = [-1,1,5,5]
for I in range(1, 4):
    for J in range(1,cnt[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 3
        elif I == 2:
            n = randint(2,33) * 3
        else:
            n = randint(3,100)
        test_data.input_writeln(n)
        test_data.output_gen("std.exe")
