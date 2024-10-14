from cyaron import *

_n = [-1,2,6,6]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        n = randint(1,1e4-1e3)
        if I == 1:
            a1 = randint(n+1,1e4)
            a2 = randint(n+1,1e4)
            a3 = randint(n+1,1e4)
            b1 = randint(1,min(a1,n))
            b2 = randint(1,min(a2,n))
            b3 = randint(1,min(a3,n))
        elif I == 2:
            a1 = randint(1,1e4)
            a2 = randint(1,1e4)
            a3 = randint(1,1e4)
            b1 = randint(1,min(a1,n))
            b2 = b1
            b3 = b1
        elif I == 3:
            a1 = randint(1,1e4)
            a2 = randint(1,1e4)
            a3 = randint(1,1e4)
            b1 = randint(1,min(a1,n))
            b2 = randint(1,min(a2,n))
            b3 = randint(1,min(a3,n))
        test_data.input_writeln(n)
        test_data.input_writeln(a1,b1)
        test_data.input_writeln(a2,b2)
        test_data.input_writeln(a3,b3)
        test_data.output_gen("std.exe")
# 懒得慢慢构造了，我相信随机的强度