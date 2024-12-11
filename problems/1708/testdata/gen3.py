from cyaron import *
INF9 = int(1E9)
INF7 = int(1E7)
INF6 = int(1E6)
_t = [0, 4, 4, 4]
for I in range(1, 3 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        b = randint(1,1000)
        c = randint(2,1000)
        y = randint(1,1000)
        z = randint(2,1000)
        if I == 1:
            if J == 1:
                a = randint(1,y)
                x = randint(1,b)
            elif J == 2:
                a = y+randint(1,z-1)
                x = b+randint(1,c-1)
            elif J==3:
                a = y+z
                x = b+c
            elif J == 4:
                a = y+randint(z,10000-y)
                x = b+randint(c,10000-b)
        elif I == 2:
            if J == 1:
                a = y+z
                x = randint(1,b)
            elif J == 2:
                a = y+randint(z,10000-y)
                x = b+randint(1,c-1)
            elif J==3:
                a = randint(1,y)
                x = b+c
            elif J == 4:
                a = y+randint(1,z-1)
                x = b+randint(c,10000-b)
        elif I == 3:
            a = randint(1,y+z+z)
            x = randint(1,b+c+c)
        test_data.input_writeln(a,b,c)
        test_data.input_writeln(x,y,z)
        test_data.output_gen("std.exe")
