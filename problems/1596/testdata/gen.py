from cyaron import *

_n = [-1,5,5,6,4]
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J),)
        if I == 1:
            if J == 1:
                test_data.input_writeln(1,1)
            elif J==2:
                test_data.input_writeln(100,1)
            else:
                test_data.input_writeln(randint(2,99),1)
        elif I==2:
            if J == 1:
                m = 66
            else:
                m = randint(1,32)*2
            n = m + m//2 - 1
            test_data.input_writeln(n,m)
        elif I==3: 
            n = 8 # 11011011
            m = J
            test_data.input_writeln(n,m)
        else:
            m = randint(1,66)
            n = randint(m+m//2,100)
            test_data.input_writeln(n,m)               
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


