from cyaron import *
_n = [-1,4,4,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln(J)
        elif I == 2:
            if J == 1:
                test_data.input_writeln(1)
            elif J == 2:
                test_data.input_writeln(3)
            else:
                test_data.input_writeln(randint(3,50)*2-1)
        elif I == 3:
            test_data.input_writeln(randint(1,100))
        test_data.output_gen("std.exe")
# 语法周赛，数据造的比较随意，懒得卡一些边界了。