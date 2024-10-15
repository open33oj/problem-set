from cyaron import *
_n = [-1,12,3,15]
INF = 2147483647
IINF = -2147483648
'''
周长 面积
4 1
8 4
12 9
16 16
20 25
'''
t=[[4,3,12],[4,2,12],[4,4,12],
   [12,9,12],[12,8,12],[12,10,12],
   [16,11,12],[16,13,12],[16,12,12],
   [20,12,12],[20,11,12],[20,13,12]]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln(t[J-1])
        elif I == 2:
            if J == 1:
                test_data.input_writeln(9,33,33)
            elif J==2:
                test_data.input_writeln(17,33,33)
            elif J==3:
                test_data.input_writeln(33,33,33)
        elif I == 3:
            if J <= 12:
                test_data.input_writeln(t[J-1][0]+randint(1,3),t[J-1][1],t[J-1][2])
            elif J == 13:
                n = 200
                a = 100
                b = 100
                test_data.input_writeln(n,a,b)
            else:
                n = randint(1,200)
                a = randint(1,100)
                b = randint(a,100)
                test_data.input_writeln(n,a,b)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


