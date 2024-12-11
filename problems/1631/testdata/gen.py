from cyaron import *
_n = [-1,1,1,6,7]
INF = int(1e9)
_t = [
    [0,0,0,0],
    [0,0,0,0],
    [0,0,0,0],
    [0,0,0,0]
]
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            for i in range(4):
                for j in range(4):
                    _t[i][j] = 0
            for i in range(4):
                for j in range(i+1,4):
                    _t[i][j] = 1
            test_data.input_writeln(_t[0])
            test_data.input_writeln(_t[1])
            test_data.input_writeln(_t[2])
            test_data.input_writeln(_t[3])
        if I == 2:
            for i in range(4):
                for j in range(4):
                    _t[i][j] = 0
            _t[0][3] = 1
            _t[1][3] = 1
            _t[2][3] = 1
            test_data.input_writeln(_t[0])
            test_data.input_writeln(_t[1])
            test_data.input_writeln(_t[2])
            test_data.input_writeln(_t[3])
        if I == 3:
            for i in range(4):
                for j in range(4):
                    _t[i][j] = 0
            if J == 1:
                _t[0][1] = 1
            if J == 2:
                _t[0][2] = 1
            if J == 3:
                _t[0][3] = 1
            if J == 4:
                _t[1][2] = 1
            if J == 5:
                _t[1][3] = 1
            if J == 6:
                _t[2][3] = 1
            test_data.input_writeln(_t[0])
            test_data.input_writeln(_t[1])
            test_data.input_writeln(_t[2])
            test_data.input_writeln(_t[3])
        if I == 4:
            for i in range(4):
                for j in range(4):
                    _t[i][j] = 0
            if J == 1:
                _t[0] = [0,1,0,0]
                _t[1] = [0,0,1,0]
                _t[2] = [0,0,0,1]
            else:
                _t[0][1] = randint(0,1)
                _t[0][2] = randint(0,1)
                _t[0][3] = randint(0,1)
                _t[1][2] = randint(0,1)
                _t[1][3] = randint(0,1)
                _t[2][3] = randint(0,1)
            test_data.input_writeln(_t[0])
            test_data.input_writeln(_t[1])
            test_data.input_writeln(_t[2])
            test_data.input_writeln(_t[3])
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
