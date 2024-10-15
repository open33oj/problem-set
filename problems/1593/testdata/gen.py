from cyaron import *
_n = [-1,5,5,5]
INF = int(1e9)
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = randint(100,500) # 显然我的字符串长度不会很长
            s = str(randint(0,1e9))         
            for i in range(n-1):
                s = s + "+" + str(randint(0,1e9))  
            test_data.input_writeln(s)
        if I == 2:
            n = randint(100,500) # 显然我的字符串长度不会很长
            s = str(randint(0,9))         
            for i in range(n-1):
                if randint(1,2)==1:
                    s = s + "+" + str(randint(0,9)) 
                else:
                    s = s + "-" + str(randint(0,9))  
            test_data.input_writeln(s)
        if I == 3:
            n = randint(100,500) # 显然我的字符串长度不会很长
            s = str(randint(0,1e9))         
            for i in range(n-1):
                if randint(1,2)==1: 
                    s = s + "+" + str(randint(0,1e9)) 
                else:
                    s = s + "-" + str(randint(0,1e9))  
            test_data.input_writeln(s)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


