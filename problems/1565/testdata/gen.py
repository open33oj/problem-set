from cyaron import *
_n = [-1,5,10,15]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            a = 1
            b = randint(1,1000)    
        elif I == 2:
            a = randint(1,100)
            if J==1:
                b=a
            else:
                b = randint(a,1000)//a*a
        elif I == 3:
            if J <= 5:
                a = randint(1,1000)
                b = randint(1,1000)
            else:
                d = randint(1,100)
                a = randint(1,1000//d)*d
                b = randint(1,1000//d)*d
        test_data.input_writeln(a,b,randint(1,10000))
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


