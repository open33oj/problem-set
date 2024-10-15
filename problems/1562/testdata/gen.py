from cyaron import *
_n = [-1,5,5,10]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        n = 1000
        test_data.input_writeln(n)
        s = ""
        s += chr(ord('0')+randint(1,9))
        for i in range(999):
            s += chr(ord('0')+randint(0,9))
        test_data.input_writeln(s)
        if I == 1:
            for i in range(n):
                l = randint(1,1000)
                test_data.input_writeln(l,l,randint(1,12))
        elif I == 2:
            for i in range(n):
                l = randint(1,1000)
                r = randint(1,1000)
                if l>r:
                    l,r=r,l
                test_data.input_writeln(l,r,1000)
        elif I == 3:
            for i in range(n):
                l = randint(1,1000)
                r = randint(1,1000)
                if l>r:
                    l,r=r,l
                test_data.input_writeln(l,r,998244353)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


