from cyaron import *
_n = [-1,3,5,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        n = randint(1E6-100,1E6)
        if I == 1:
            x = randint(1,1E6)
            y = x       
        elif I == 2:
            x = randint(1,1E6-1)
            y = randint(x+1,1E6)
            x,y = y,x
        elif I == 3:
            x = randint(1,1E6)
            y = randint(1,1E6)
        test_data.input_writeln(n,x,y)
        test_data.output_gen("std.exe")
# 语法周赛，数据造的比较随意，懒得卡一些边界了。