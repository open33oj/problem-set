from cyaron import *
_n = [-1,5,5,5,6]
N = int(5e3)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = [4999,3511,2333,1777,2][J-1]
            k = randint(1,10)
        if I == 2:
            n = [5000,4999,4588,15,1][J-1]
            k = 1
        if I == 3:
            n = [4998,4997,4996,4995,1][J-1]
            k = 2
        if I == 4:
            n = [4994,5000,1414,1415,4992,4991][J-1]
            k = [10,10,9,9,8,8][J-1]
        test_data.input_writeln(n,k)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
