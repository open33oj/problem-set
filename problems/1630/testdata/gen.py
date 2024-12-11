from cyaron import *
_n = [-1,2,2,3,3]
INF = int(1e8)
print("ok")        
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 4
            m = 10
            test_data.input_writeln(n,m)
            for i in range(m):
                flag = 0
                for j in range(n):
                    if flag<J:
                        now = randint(0,1)
                    else:
                        now = 0
                    if now:
                        flag+=1
                    test_data.input_write(now)
                test_data.input_writeln()                
        if I == 2:
            m = 1
            n = 88 - J + 1
            test_data.input_writeln(n,m)
            for i in range(m):
                for j in range(n):
                    test_data.input_write(randint(0,1))
                test_data.input_writeln()
        if I == 3:
            n = randint(30,70)
            m = randint(1,INF//4//(n**4))
            test_data.input_writeln(n,m)
            for i in range(m):
                for j in range(n):
                    if randint(1,50)==1:
                        test_data.input_write(1)
                    else:
                        test_data.input_write(0)
                test_data.input_writeln()
        if I == 4:
            n = 88
            m = randint(1000-10,1000)
            test_data.input_writeln(n,m)
            for i in range(m):
                for j in range(n):
                    if randint(1,50)==1:
                        test_data.input_write(1)
                    else:
                        test_data.input_write(0)
                test_data.input_writeln()
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
