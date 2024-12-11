from cyaron import *
_n = [-1,3,3,3]
INF = int(1e6)
for I in range(1, 3+1):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        test_data.input_writeln(_t[I][J][1],_t[I][J][0])
        test_data.output_gen("std.exe")
# 实际上可以把 3-1 的 0.003 改为 0.0003 来卡住不少人。
# 但出题时没说的太严谨，理论上可以无穷小得到奇怪的答案，所以也不合适卡，可以改完题面后卡
