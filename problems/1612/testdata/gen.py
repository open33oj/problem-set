from cyaron import *
_n = [-1,2,2,1,1]
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J==1:
                test_data.input_writeln(10)
                for i in range(10):
                    test_data.input_writeln(i+1)
            else:
                test_data.input_writeln(1000)
                for i in range(1000):
                    test_data.input_writeln(randint(1,10))        
        if I == 2:
            if J==1:
                test_data.input_writeln(100)
                for i in range(100):
                    test_data.input_writeln(i+1)
            else:
                test_data.input_writeln(1000)
                for i in range(1000):
                    test_data.input_writeln(randint(1,100)) 
        if I == 3:
            test_data.input_writeln(1000)
            for i in range(1000):
                test_data.input_writeln(randint(1,1e18))
        if I == 4:
            test_data.input_writeln(1000000)
            for i in range(1000000):
                if 33<=i and i<=1000:
                    test_data.input_writeln(i-32)
                else:
                    test_data.input_writeln(randint(1,1e18))
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
