from cyaron import *
_n = [-1,3,3,3]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        n = 1000
        a = []
        for i in range(n):
            a.append(randint(1,1000))
        if I == 1:
            a.sort(reverse=True)
            test_data.input_writeln(n)
            test_data.input_writeln(a)          
        elif I == 2:
            a.sort()
            test_data.input_writeln(n)
            test_data.input_writeln(a) 
        elif I == 3:
            test_data.input_writeln(n)
            test_data.input_writeln(a)       
        test_data.output_gen("std.exe")
# 语法周赛，数据造的比较随意，懒得卡一些边界了。