from cyaron import *
_n = [-1,3,3,5,5]
_t = [[],
      [999,111,555],
      [110,119,113],
      [100,105,150,139,196],
      [509,519,358,790,780]]
N = int(1e6)
INF = int(1e18)
INF9 = int(1e9)
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