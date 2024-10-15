from cyaron import *
_n = [-1,2,9,9]
pos = [
    [33,33],
    [1,1],[1,100],[100,1],[100,100],
    [1,33],[33,100],[100,33],[33,1],
]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J == 1:
                test_data.input_writeln(1,1)
                test_data.input_writeln("*")
            if J == 2:
                test_data.input_writeln(1,1)
                test_data.input_writeln(".")
        if I == 2:
            test_data.input_writeln(100,100)
            for i in range(1,101):
                s=""
                for j in range(1,101):
                    if pos[J-1][0] == i and pos[J-1][1]==j:
                        s+='*'
                    else:
                        s+='.'
                test_data.input_writeln(s)    
        if I == 3:
            test_data.input_writeln(100,100)
            for i in range(1,101):
                s=""
                for j in range(1,101):
                    if J==1:
                        s+='*'
                    elif J==2:
                        s+='.'
                    else:
                        s+="..*"[randint(0,2)]
                test_data.input_writeln(s) 
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


