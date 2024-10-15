from cyaron import *
_n = [-1,5,5,5]
INF = 2147483647
IINF = -2147483648
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        len = randint(90,100)
        s = str(randint(1,9))
        num0 = randint(10,20)
        for i in range(len-2):
            if i < len-num0:
                s = s + str(randint(0,9))
            else:
                s = s + "0"
        if I == 1:
            t = s[0]
            t = t+'.'
            t = t+s[1:]
            test_data.input_writeln(t)
        elif I == 2:
            test_data.input_writeln(s)
        elif I == 3:
            pos = randint(0,90)
            t = s[0:pos]
            t = t + '.'
            t = t + s[pos+1:]
            test_data.input_writeln(t)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


