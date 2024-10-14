from cyaron import *
_n = [-1,3,4,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J == 1:
                test_data.input_writeln(3)
            else:
                test_data.input_writeln(randint(4,9))
        elif I == 2:
            if J == 1:
                test_data.input_writeln(3133)
            elif J == 2:
                test_data.input_writeln(1000)
            elif J==3:
                test_data.input_writeln(3213)
            else:
                test_data.input_writeln(8030)
        elif I == 3:
            s = ""
            for i in range(8):
                if randint(0,1)==1:
                    s+="3"
                elif i == 0:
                    s+=str(randint(0,9))
                else:
                    s+=str(randint(1,9))
            test_data.input_writeln(s)
        test_data.output_gen("std.exe")
# 语法周赛，数据造的比较随意，懒得卡一些边界了。