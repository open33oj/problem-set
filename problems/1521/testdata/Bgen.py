from cyaron import *
_n = [-1,5,5,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln(10-J)
        elif I == 2:
            test_data.input_writeln(randint(1E6-1E5,1E6))
        elif I == 3:
            test_data.input_writeln(randint(1E12-1E11,1E12))
        test_data.output_gen("B2.exe")