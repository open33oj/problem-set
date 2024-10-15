from cyaron import *
_n = [-1,3,5,3,9]
INF = int(1e9)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        n = 1000 - randint(0,3)
        if I == 1:
            n = 1
        elif I == 2:
            n = 26 - randint(0,3)
        elif I == 4 and J <= 2:
            n = 10
        elif I == 4 and J <= 4:
            n = 100
        m = 1000 - randint(0,3)
        nam = []
        for i in range(n):
            if I==2:
                nam.append(chr(ord('a')+i))
            else:
                now = String.random(6)
                while now in nam:
                    now = String.random(6)
                nam.append(now)
        test_data.input_writeln(n,m)
        test_data.input_writeln(nam)
        for i in range(m):
            if randint(1,5)<=4:
                if I == 3:
                    test_data.input_writeln(1,nam[randint(0,n-1)],1,100)
                else:
                    test_data.input_writeln(1,nam[randint(0,n-1)],randint(1,4),randint(0,10)*10)
            else:
                test_data.input_writeln(2)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了

