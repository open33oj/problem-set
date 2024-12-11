from cyaron import *
_n = [-1,7,5,5,5]
INF = int(1e9)
print("ok")        
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J == 1:
                test_data.input_writeln(1)
            elif J == 2:
                test_data.input_writeln(10)
            elif J == 3:
                test_data.input_writeln(100)
            else:
                test_data.input_writeln(randint(20,25)*4-J%4)
        if I == 2:
            now = int(5e3)
            if J == 1:
                test_data.input_writeln(now)
            else:
                test_data.input_writeln(randint(now//4 - 100,now//4)*4-J%4)
        if I == 3:
            now = int(1e6)
            if J == 1:
                test_data.input_writeln(now)
            else:
                test_data.input_writeln(randint(now//4 - 100,now//4)*4-J%4)
        if I == 4:
            now = int(9e18)
            if J == 1:
                test_data.input_writeln(now)
            else:
                test_data.input_writeln(randint(now//4 - 100,now//4)*4-J%4)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
