from cyaron import *
_n = [-1,1,3,1]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 1000-J+1
            test_data.input_writeln(n)
            x = randint(1,1e9)
            for i in range(n):
                for j in range(n):
                    test_data.input_write(x)
                test_data.input_writeln()
            for i in range(n):
                test_data.input_writeln(randint(1,2),randint(1,n))
            for i in range(n):
                test_data.input_writeln(randint(1,n),randint(1,n))
        if I == 2:
            n = 100-J+1
            test_data.input_writeln(n)
            for i in range(n):
                for j in range(n):
                    test_data.input_write(randint(1,1e9))
                test_data.input_writeln()
            for i in range(n):
                test_data.input_writeln(randint(1,2),randint(1,n))
            for i in range(n):
                test_data.input_writeln(randint(1,n),randint(1,n))
        if I == 3:
            n = 1000-J+1
            test_data.input_writeln(n)
            for i in range(n):
                for j in range(n):
                    test_data.input_write(randint(1,1e9))
                test_data.input_writeln()
            for i in range(n):
                test_data.input_writeln(randint(1,2),randint(1,n))
            for i in range(n):
                test_data.input_writeln(randint(1,n),randint(1,n))
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


