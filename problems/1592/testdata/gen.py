from cyaron import *
_n = [-1,1,5,9]
INF = int(1e9)
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln("11010")            
        if I == 2:
            s = ""
            for i in range(1,6):
                if J == i:
                    s = s+"1"
                else:
                    s = s+"0"
            test_data.input_writeln(s)
        if I == 3:
            if J==1:
                test_data.input_writeln("00000")
            elif J==2:
                test_data.input_writeln("11111")
            else:
                s = ""
                for i in range(1,6):
                    if randint(1,2)==1:
                        s = s+"1"
                    else:
                        s = s+"0"
                test_data.input_writeln(s) # 我甚至懒得判重复
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


