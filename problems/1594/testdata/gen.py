from cyaron import *
_n = [-1,9,5,5]
INF = int(1e9)
for I in range(1, 3):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln("0."+str(J))
        if I == 2:
            if J == 1:
                test_data.input_writeln("0.999999999")
            elif J == 2:
                test_data.input_writeln("0.000000001")  
            else:              
                s = "0."
                for i in range(9):
                    s=s+str(randint(0,9)) # 应该不会运气那么背出来9个0吧
                test_data.input_writeln(s)
        if I == 3:
            pass
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


