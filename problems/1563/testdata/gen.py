from cyaron import *
_n = [-1,5,5,10]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        n = 1000
        k = randint(1,9)
        if I == 1:
            k = 1
            test_data.input_writeln(n,k)
            for i in range(n):
                l = randint(1,int(1e9))
                r = randint(1,int(1e9))
                if l>r:
                    l,r=r,l
                test_data.input_writeln(l,r)           
        elif I == 2:
            test_data.input_writeln(n,k)
            for i in range(n):
                l = randint(1,int(1000))
                r = randint(1,int(1000))
                if l>r:
                    l,r=r,l
                test_data.input_writeln(l,r)  
        elif I == 3:
            test_data.input_writeln(n,k)
            for i in range(n):
                l = randint(1,int(1e9))
                r = randint(1,int(1e9))
                if l>r:
                    l,r=r,l
                test_data.input_writeln(l,r) 
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


