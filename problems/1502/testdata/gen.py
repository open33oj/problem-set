from cyaron import *
_n = [-1,3,6,2]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J == 1:
                test_data.input_writeln(800002300)
            elif J == 2:
                test_data.input_writeln(777002010)
            elif J==3:
                test_data.input_writeln(800002100)
            else:
                test_data.input_writeln(randint(1,1000000000))            
        elif I == 2:
            s = ""
            for i in range(1000):
                if i == 0:
                    s += "12456789"[randint(0,7)]
                else:
                    s += "012456789"[randint(0,8)]     
            test_data.input_writeln(s)          
        elif I == 3:
            s = ""
            for i in range(1000):
                if i == 0:
                    s += "123456789"[randint(0,8)]
                else:
                    s += "0123456789"[randint(0,9)]   
            test_data.input_writeln(s)       
        test_data.output_gen("std.exe")
# 语法周赛，数据造的比较随意，懒得卡一些边界了。