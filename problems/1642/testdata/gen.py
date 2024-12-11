from cyaron import *
_n = [-1,3,3,3,3]
INF = int(2e7)
print("ok")        
for I in range(1,5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln(randint(INF-1000,INF),1)
        if I == 2:
            test_data.input_writeln(randint(10000-1000,10000),randint(2,100))
        if I == 3:
            test_data.input_writeln(randint(1000000-1000,1000000),randint(2,100))
        if I == 4:
            test_data.input_writeln(randint(INF-1000,INF),randint(2,100))
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
