from cyaron import *
_n = [-1,10,10,10]
INF = 2147483647
IINF = -2147483648
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            a3 = randint(0,119)
            a2 = randint(0,a3)
            a1 = randint(0,a2)
            b3 = randint(0,119-a3)
            b2 = randint(0,b3)
            b1 = randint(0,b2)
            c3 = randint(0,119-a3-b3)
            c2 = randint(0,c3)
            c1 = randint(0,c2)
            d3 = randint(0,119-a3-b3-c3)
            d2 = randint(0,d3)
            d1 = randint(0,d2)
        elif I == 2:
            a3 = randint(0,200)
            a2 = a3
            a1 = a2
            b3 = randint(0,200)
            b2 = b3
            b1 = b2
            c3 = randint(0,200)
            c2 = c3
            c1 = c2
            d3 = randint(0,200)
            d2 = d3
            d1 = d2
        elif I == 3:
            a3 = randint(0,200)
            a2 = randint(0,a3)
            a1 = randint(0,a2)
            b3 = randint(0,200)
            b2 = randint(0,b3)
            b1 = randint(0,b2)
            c3 = randint(0,200)
            c2 = randint(0,c3)
            c1 = randint(0,c2)
            d3 = randint(0,200)
            d2 = randint(0,d3)
            d1 = randint(0,d2)
        test_data.input_writeln(a1,a2,a3)
        test_data.input_writeln(b1,b2,b3)
        test_data.input_writeln(c1,c2,c3)
        test_data.input_writeln(d1,d2,d3)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


