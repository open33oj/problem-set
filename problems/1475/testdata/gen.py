from cyaron import *

num = [-1, 10, 5, 5]
for I in range(1, 4):
    for J in range(1,num[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        n = randint(49,50)
        m = randint(49,50)
        test_data.input_writeln(n,m)
        if I == 2:
            last = 0
            for i in range(n):
                s = ""
                flag = randint(0,2)
                if flag and i-last>2:   
                    last = i
                    for j in range(m):
                        s+="...##"[randint(0,4)]
                else:
                    for j in range(m):
                        s+="....."[randint(0,4)]
                test_data.input_writeln(s)
        elif I == 1:
            if J == 1:
                #竖连
                x = 33
                y = 33
                xx = 34
                yy = 33
            elif J == 2:
                #横连
                x = 33
                y = 33
                xx = 33
                yy = 34
            elif J == 3:
                #斜1连
                x = 33
                y = 33
                xx = 34
                yy = 34
            elif J == 4:
                #斜2连
                x = 33
                y = 33
                xx = 32
                yy = 34
            elif J == 5:
                #横空
                x = 33
                y = 33
                xx = 33
                yy = 35
            elif J == 6:
                #竖空
                x = 33
                y = 33
                xx = 35
                yy = 33
            elif J == 7:
                #斜1空
                x = 33
                y = 33
                xx = 35
                yy = 35
            elif J == 8:
                #斜2空
                x = 33
                y = 33
                xx = 31
                yy = 35
            elif J == 9:
                #同行不相关
                x = 33
                y = 33
                xx = 33
                yy = 37
            elif J == 10:
                #隔着很远
                x = 3
                y = 3
                xx = 33
                yy = 33
            for i in range(n):
                s = ""
                for j in range(m):
                    if (i == x and j == y) or (i==xx and j==yy):
                        s+="#"
                    else:
                        s+="."
                test_data.input_writeln(s)
        else:
            for i in range(n):
                s = ""
                for j in range(m):
                    s+="...##"[randint(0,4)]
                test_data.input_writeln(s)
        test_data.output_gen("std.exe")
