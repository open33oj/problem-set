from cyaron import *

_n = [-1,5,10,10]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J),)
        if I == 1:
            x = randint(0,25)
            y = randint(0,100-x)
            z = 100-x-y
            test_data.input_writeln(x,y,z,25)
        elif I==2:
            y = randint(0,50)*2
            z = randint(0,(100-y)//4)*4
            x = 100-y-z
            if J%3==0:
                test_data.input_writeln(x,y,z,x+y//2+z//4)
            elif J%3==1:
                test_data.input_writeln(x,y,z,x+y//2+z//4+1)
            else:
                test_data.input_writeln(x,y,z,x+y//2+z//4-1)                
        else:
            x = randint(0,100)
            y = randint(0,100-x)
            z = 100-x-y
            if J%3==0:
                test_data.input_writeln(x,y,z,x+y//2+z//4)
            elif J%3==1:
                test_data.input_writeln(x,y,z,x+y//2+z//4+1)
            else:
                test_data.input_writeln(x,y,z,x+y//2+z//4-1)  
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


