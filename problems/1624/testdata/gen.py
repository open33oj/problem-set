from cyaron import *
_n = [-1,3,5,5,7]
INF = int(1e18)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J == 1:
                test_data.input_writeln(INF,INF-1)
            if J==2:
                test_data.input_writeln(1,INF)
            if J==3:
                test_data.input_writeln(123456789,876543210)
        if I == 2:
            if J==1:
                test_data.input_writeln(4,6)
            if J==2:
                test_data.input_writeln(4,7)
            if J==3:
                test_data.input_writeln(4,8)
            if J==4:
                test_data.input_writeln(9,9)
            if J==5:
                test_data.input_writeln(2,3)
        if I == 3:
            if J == 1:
                test_data.input_writeln(INF-1,111111111111111111)
            else:
                a = 0
                b = 0
                for i in range(18):
                    if i==0:
                        a=randint(1,9)
                        if J%2==0:
                            b=10-a
                        else:
                            b=randint(1,9)
                    else:
                        a=a*10+randint(0,9)
                        b=b*10+randint(0,9)
                test_data.input_writeln(a,b)
        if I == 4:
            a = 0
            lena = randint(10,18)
            b = 0
            lenb = randint(10,18)
            for i in range(lena):
                a=a*10+randint(0,9)
            for i in range(lenb):
                b=b*10+randint(0,9)
            test_data.input_writeln(a,b)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
