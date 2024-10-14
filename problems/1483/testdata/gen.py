from cyaron import *

cnt = [-1,5,5,5]
for I in range(1, 4):
    for J in range(1,cnt[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        n = 1000
        test_data.input_writeln(n)
        if I == 1:
            maxAi = randint(0,100)
            for i in range(n):
                test_data.input_writeln(randint(0,maxAi),0)
        elif I == 2:
            for i in range(n):
                if randint(1,20)==1:
                    test_data.input_writeln(1,randint(5,8))
                elif randint(1,10)==1:
                    test_data.input_writeln(1,randint(1,5))
                elif randint(1,10)<=1:
                    test_data.input_writeln(1,1) 
                else:
                    test_data.input_writeln(1,0)
        else:
            for i in range(n):
                if randint(1,20)==1:
                    test_data.input_writeln(randint(0,100),randint(5,8))
                elif randint(1,10)==1:
                    test_data.input_writeln(randint(0,100),randint(1,5))
                elif randint(1,10)<=1:
                    test_data.input_writeln(randint(0,100),1) 
                else:
                    test_data.input_writeln(randint(0,100),0)
        test_data.output_gen("std.exe")
