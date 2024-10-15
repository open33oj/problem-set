from cyaron import *
_n = [-1,10,10,10]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        a = randint(100,999)
        while a%10==a//10%10 or a%10==a//100%10 or a//10%10==a//100%10:
            a=randint(100,999)
        if I == 1:
            if J == 9:
                a = 986
            elif J==10:
                a = 124
            elif J==8:
                a = 523
            test_data.input_writeln(a,1000)
        elif I == 2:
            if J == 9:
                a = 986
            elif J==10:
                a = 124
            elif J==8:
                a = 523
            test_data.input_writeln(a,648)
        elif I == 3:
            if J == 9:
                a = 986
            elif J==10:
                a = 124
            elif J==8:
                a = 523
            test_data.input_writeln(a,10)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


