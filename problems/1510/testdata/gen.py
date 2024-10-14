from cyaron import *
_n = [-1,2,3,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 365-J+1
            test_data.input_writeln(n)
            s = ""
            for i in range(n):
                s+="."
            test_data.input_writeln(s)
        elif I == 2:
            n = 365-J+1
            test_data.input_writeln(n)
            s = ""
            for i in range(n):
                if randint(1,3)==1:
                    s+="."
                else:
                    s+="o"
            test_data.input_writeln(s)
        elif I == 3:
            n = 365-J+1
            test_data.input_writeln(n)
            s = ""
            for i in range(n):
                if randint(1,3)==1:
                    s+="."
                elif randint(1,2)==1:
                    s+="~"
                else:
                    s+="o"
            test_data.input_writeln(s)
        test_data.output_gen("std.exe")
# 语法周赛，数据造的比较随意，懒得卡一些边界了。