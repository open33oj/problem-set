from cyaron import *
_n = [-1,5,5,3,4]
INF18 = int(1e16)
INF5 = int(1e8)
INF10 = int(1e10)
_t = [[0],[1],[2],[[13,35,79],[48,19,73],[1000,239,147]],[[100000,23333,15555],[99999,20,13333],[99999,99997,13333]]]
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 1
            k = randint(INF10//2,INF10)
            a = [randint(1,INF5)]
        if I == 2:
            n = 2
            k = randint(INF10//2,INF10)
            x = randint(1,INF5)
            y = x + 1
            a = [x,y]
        if I == 3:
            n = 3
            k = randint(1,int(1e4))
            a = _t[I][J-1]
        if I == 4:
            n = 3
            if J == 4:
                k = int(1e16)
                a = [11,3,7]
            else:
                k = randint(50,100)
                a = _t[I][J-1]
        test_data.input_writeln(n,k)
        test_data.input_writeln(a)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
