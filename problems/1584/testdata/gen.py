from cyaron import *
_n = [-1,8,8,8]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J),)
        if I == 1:
            q = randint(-1e6,1e6)
            if q==0:
                q+=1
            p = randint(1,1000)*q
            test_data.input_writeln(p,q)
        elif I==2:
            if J % 3 <= 1:
                q = randint(1,1e7)*2
                p = q*randint(1,49) + q//2
            else:
                q = randint(1,1e7)
                p = randint(1,1e9)
            test_data.input_writeln(p,q)
        else:
            if J % 3 <= 1:
                q = randint(-1e7,1e7)*2
                p = q*randint(1,49) + q//2
            else:
                q = randint(-1e7,1e7)
                p = randint(-1e9,1e9)
            test_data.input_writeln(p,q)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


