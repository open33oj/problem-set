from cyaron import *
_n = [-1,5,10,15]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        a = randint(100,999)
        if I == 1:
            b=a
        elif I == 2:
            num = [a%10,a//10%10,a//100%10]
            b = num[randint(0,2)]*100+num[randint(0,2)]*10+num[randint(0,2)]
            while b<100:
                b = num[randint(0,2)]*100+num[randint(0,2)]*10+num[randint(0,2)]
        elif I == 3:
            b=randint(100,999)
        test_data.input_writeln(a)
        test_data.input_writeln(b)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


