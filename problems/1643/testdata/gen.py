from cyaron import *
_n = [-1,5,6,5,4]
_t = [[],[987,546879,864282,611,518],[1,5,14,17,16,2],[751,332,658,998,865],[989687,957133,217229,127297]]
INF = int(1e9)
print("ok")      
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            pass
        if I == 2:
            pass
        if I == 3:
            pass
        if I == 4:
            pass
        test_data.input_writeln(_t[I][J-1])
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
