from cyaron import *
_n = [-1,1,5,1,5]
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln(50)
        if I == 2:
            if J <= 3:
                test_data.input_writeln(randint(1e5-1e2,1e5))
            else:
                test_data.input_writeln(randint(1,1e5))
        if I == 3:
            test_data.input_writeln(3333333)
        if I == 4:
            if J <= 3:
                test_data.input_writeln(randint(1e7-1e2,1e7))
            else:
                test_data.input_writeln(randint(1,1e7))
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
