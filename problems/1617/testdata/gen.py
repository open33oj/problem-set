from cyaron import *
_n = [-1,10,2,3,9]
INF = int(1e9)
def f(i,j,n,m):
    return "({}x+{})({}x+{})".format(i,j,n,m)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I==1:
            if J==1:
                test_data.input_writeln(f(0,0,0,0))
            if J==2:
                test_data.input_writeln(f(0,3,0,6))
            if J==3:
                test_data.input_writeln(f(0,0,3,6))
            if J==4:
                test_data.input_writeln(f(3,6,0,0))
            if J==5:
                test_data.input_writeln(f(0,0,0,9))
            if J==6:
                test_data.input_writeln(f(0,0,9,0))
            if J==7:
                test_data.input_writeln(f(3,0,6,0))
            if J==8:
                test_data.input_writeln(f(2,8,3,9))
            if J==9:
                test_data.input_writeln(f(2,8,3,7))
            if J==10:
                test_data.input_writeln(f(4,5,4,8))           
        if I ==2:
            if J==1:
                test_data.input_writeln(f(INF,INF//2+1,INF,INF-1))
            if J==2:
                test_data.input_writeln(f(0,INF,0,INF))
        if I == 3:
            # 有解
            if J==1:
                test_data.input_writeln(f(INF,INF//2+1,INF//3,INF))
            if J==2:
                test_data.input_writeln(f(INF//1000,INF//10,INF//3-2,INF))
            # 无解
            if J==3:
                test_data.input_writeln(f(INF//100-1,INF//10,INF//100+1,INF//1000))
        if I == 4:
            # 有解
            i = randint(1,INF//10)
            n = randint(1,INF//i)*i
            j = randint(1,INF//10)
            m = randint(1,INF//j)*j
            if J % 3 == 1:
                n = randint(i,INF)
            if J % 3 == 2:
                m = randint(j,INF)
            test_data.input_writeln(f(i,n,j,m))
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
