from cyaron import *
_n = [-1,3,2,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln(3)
            if J == 1:
                test_data.input_writeln(100,10,20)
            elif J == 2:
                test_data.input_writeln(33,66,1)
            else:
                test_data.input_writeln(1,99,100)
        elif I == 2:
            if J == 1:
                n = 100
                test_data.input_writeln(n)
                for i in range(n):
                    test_data.input_write(3)
                test_data.input_writeln()
            if J == 2:
                n = 34
                test_data.input_writeln(n)
                for i in range(n):
                    test_data.input_write(3)
                test_data.input_writeln()
        elif I == 3:
            n = 100
            test_data.input_writeln(n)
            for i in range(n):
                test_data.input_write(randint(1,5))
            test_data.input_writeln()
        test_data.output_gen("std.exe")
# 语法周赛，数据造的比较随意，懒得卡一些边界了。