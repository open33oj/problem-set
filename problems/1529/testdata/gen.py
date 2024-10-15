from cyaron import *
_n = [-1,5,5,2]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln(2)
            test_data.input_writeln(randint(1,1E6),randint(1,1E6))
        elif I == 2:
            n = 100-J+1
            test_data.input_writeln(n)
            for i in range(n):
                test_data.input_write(randint(1,100))
            test_data.input_writeln()
        elif I == 3:
            n = 1000000-J+1
            test_data.input_writeln(n)
            for i in range(n):
                test_data.input_write(randint(1,1E6))
            test_data.input_writeln()
        test_data.output_gen("std.exe")