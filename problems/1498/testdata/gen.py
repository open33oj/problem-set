from cyaron import *
_n = [-1,4,3,8]
all = ["A","2","3","4","5",
       "6","7","8","9","J",
       "Q","K","10"]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J == 1:
                test_data.input_writeln("10")
            else:
                test_data.input_writeln(all[randint(0,11)])
        elif I == 2:
            s=""
            while(len(s)<=100-J):
                s=s+all[randint(0,11)]
            test_data.input_writeln(s)
        elif I == 3:
            s=""
            while(len(s)<=100-J-1):
                s=s+all[randint(0,12)]
            test_data.input_writeln(s)
        test_data.output_gen("std.exe")
# 语法周赛，数据造的比较随意，懒得卡一些边界了。