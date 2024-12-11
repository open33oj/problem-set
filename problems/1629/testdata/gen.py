from cyaron import *
_n = [-1,5,5,5,3]
_t = [0,[],[],[],[[333,888,4],[8,9,7],[33,35,3]]]
print("ok")        
INF = int(1e5)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            a = 1
            b = randint(a+1,INF)
            c = randint(0,9)
            test_data.input_writeln(a,b,c)
        if I == 2:
            # 随机大概率有解，造完去看看数据就好
            a = randint(1,INF-1)
            b = randint(a+1,INF)
            c = randint(0,9)
            test_data.input_writeln(a,b,c)
        if I == 3:
            a = randint(1,10)
            b = randint(a+1,INF)
            c = randint(0,9)
            test_data.input_writeln(a,b,c)
        if I == 4:
            test_data.input_writeln(_t[I][J-1])
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
