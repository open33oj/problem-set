from cyaron import *
_n = [-1,1,3,3,3]
INF = int(1e6)
for I in range(1, 4+1):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        print(I,J)
        if I == 1:
            test_data.input_writeln(1)
        if I == 2:
            test_data.input_writeln([3,33,100][J-1])
        if I == 3:
            test_data.input_writeln([997,999,1000][J-1])
        if I == 4:
            test_data.input_writeln([333333,999983,INF][J-1])
        test_data.output_gen("std.exe")