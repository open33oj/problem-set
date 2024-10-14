from cyaron import *
_n = [-1,3,5,12]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            x = J*3-randint(0,2)
            y = 0
            z = 0
            q = randint(1,100)
        elif I == 2:
            x = randint(1,10)
            y = 0
            z = randint(1,10)
            q = randint(1,100)
        elif I == 3:
            x = randint(0,10)
            y = randint(0,10)
            if x+y==0:
                z = randint(1,10)
            else:
                z = randint(0,10)
            q = randint(1,100)
        test_data.input_writeln(x,y,z,q)
        test_data.output_gen("std.exe")
# 语法周赛，数据造的比较随意，懒得卡一些边界了。