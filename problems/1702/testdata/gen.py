from cyaron import *
INF9 = int(1E9)
INF7 = int(1E7)
INF6 = int(1E6)
_t = [0, 8, 5, 5]
_d = [0,0,1,1,2,2,3,3]
_x = [33,33,32,33,33,33,1,2]
_y = [32,33,33,33,1,2,33,33]
for I in range(1, 3 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 33
            m = 33
            k = 1
            d = _d[J-1]
            x = _x[J-1]
            y = _y[J-1]
        elif I == 2:
            n = randint(1,100)
            m = randint(1,100)
            k = randint(1,INF7)
            x = randint(1,n)
            y = randint(1,m)
            d = randint(0,3)
        elif I == 3:
            n = randint(INF6-100,INF6)
            m = randint(INF6-100,INF6)
            k = randint(INF7-INF6,INF7)
            x = randint(1,n)
            y = randint(1,m)
            d = randint(0,3)
        test_data.input_writeln(n,m,k)
        test_data.input_writeln(x,y,d)
        test_data.output_gen("std.exe")
