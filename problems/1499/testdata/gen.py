from cyaron import *
_n = [-1,3,3,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            M = 101-J
            test_data.input_writeln(M)
            test_data.input_writeln(randint(1,100),randint(1,100))
            for i in range(1,M+1):
                vi = randint(0,i-1)
                op = 2
                loc = randint(1,2)
                val = randint(1,100)
                if op == 1:
                    test_data.input_writeln(vi,op,loc,val)
                else:
                    test_data.input_writeln(vi,op,loc)
        elif I == 2:
            M = 101-J
            test_data.input_writeln(M)
            test_data.input_writeln(randint(1,100),randint(1,100))
            for i in range(1,M+1):
                vi = randint(0,i-1)
                op = randint(1,2)
                loc = 1
                val = randint(1,100)
                if op == 1:
                    test_data.input_writeln(vi,op,loc,val)
                else:
                    test_data.input_writeln(vi,op,loc)
        elif I == 3:
            M = 101-J
            test_data.input_writeln(M)
            test_data.input_writeln(randint(1,100),randint(1,100))
            for i in range(1,M+1):
                vi = randint(0,i-1)
                op = randint(1,2)
                loc = randint(1,2)
                val = randint(1,100)
                if op == 1:
                    test_data.input_writeln(vi,op,loc,val)
                else:
                    test_data.input_writeln(vi,op,loc)
        test_data.output_gen("std.exe")
# 语法周赛，数据造的比较随意，懒得卡一些边界了。