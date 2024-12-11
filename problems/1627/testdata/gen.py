from cyaron import *
_n = [-1,3,9,3,5]
print("ok")        
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I==1:
            len = randint(1,9)
            n = 0
            for i in range(len):
                n = n*10+[3,4,7,8][randint(0,3)]
        if I ==2:
            n = J
        if I == 3:
            len = 8
            n = 0
            for i in range(len):
                if i == 0:
                    n = n*10+randint(1,9)
                else:
                    n = n*10+randint(0,9)
        if I == 4:
            len = randint(1,9)
            n = 0
            for i in range(len):
                if i == 0:
                    n = n*10+randint(1,9)
                else:
                    n = n*10+randint(0,9)
        test_data.input_writeln(n)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
