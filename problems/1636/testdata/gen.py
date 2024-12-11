from cyaron import *
_n = [-1,5,5,5,5]
INF = int(2e6)
print("ok")        
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J == 1:
                test_data.input_writeln(2,2)
                test_data.input_writeln("vv")
                test_data.input_writeln("vv")
            elif J == 2:
                test_data.input_writeln(2,2)
                test_data.input_writeln("ov")
                test_data.input_writeln("vv")
            elif J == 3:
                test_data.input_writeln(2,2)
                test_data.input_writeln("vo")
                test_data.input_writeln("vv")
            elif J == 4:
                test_data.input_writeln(2,2)
                test_data.input_writeln("vv")
                test_data.input_writeln("ov")
            elif J == 5:
                test_data.input_writeln(2,2)
                test_data.input_writeln("vv")
                test_data.input_writeln("vo")
        if I == 2:
            n = 2
            m = randint(2000-10,2000)
            test_data.input_writeln(n,m)
            for i in range(n):
                s = ""
                for j in range(m):
                    if J==1:
                        s=s+"v"
                    elif randint(1,10)==1:
                        s=s+"w"
                    else:
                        s=s+"v"
                test_data.input_writeln(s)
        if I == 3:
            n = randint(100-5,100)
            m = randint(100-5,100)
            test_data.input_writeln(n,m)
            for i in range(n):
                s = ""
                for j in range(m):
                    if J==1:
                        s=s+"v"
                    elif randint(1,10)==1:
                        s=s+"w"
                    else:
                        s=s+"v"
                test_data.input_writeln(s)
        if I == 4:
            if J == 1:
                n = 2000
                m = 2000
            else:
                n = randint(2000-100,2000)
                m = randint(2000-100,2000)
            test_data.input_writeln(n,m)
            for i in range(n):
                s = ""
                for j in range(m):
                    if J==1:
                        s=s+"v"
                    elif randint(1,10)==1:
                        s=s+"w"
                    else:
                        s=s+"v"
                test_data.input_writeln(s)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
