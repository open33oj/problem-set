from cyaron import *

_n = [-1,6,4,2,3]
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J),)
        if I == 1:
            a = t = 1
            if J == 1:
                b = 1
                test_data.input_writeln(a,t,b)
                test_data.input_writeln(16)
            elif J == 2:
                b = 1
                test_data.input_writeln(a,t,b)
                test_data.input_writeln(20000)
            elif J == 3:
                b = 16
                test_data.input_writeln(a,t,b)
                test_data.input_writeln(16)
            elif J == 4:
                b = 16
                test_data.input_writeln(a,t,b)
                test_data.input_writeln(20000)
            else:
                b = randint(1,16)
                test_data.input_writeln(a,t,b)
                test_data.input_writeln(uniform(16,20000))
                
        elif I==2:
            t = randint(1,300)
            a = randint(1,min(44100,100000//t))
            b = 1
            test_data.input_writeln(a,t,b)
            for i in range(t):
                for j in range(a):
                    test_data.input_write(uniform(16,20000))
                test_data.input_writeln()
        elif I==3: 
            t = randint(1,300)
            a = randint(1,min(44100,100000//t))
            b = randint(1,16)
            test_data.input_writeln(a,t,b)
            for i in range(t):
                for j in range(a):
                    test_data.input_write(16)
                test_data.input_writeln()
        else:
            t = randint(1,300)
            a = randint(1,min(44100,100000//t))
            b = randint(1,16)
            test_data.input_writeln(a,t,b)
            for i in range(t):
                for j in range(a):
                    test_data.input_write(uniform(16,20000))
                test_data.input_writeln()
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


