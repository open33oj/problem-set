from cyaron import *
_n = [-1,3,3,7]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln(13-J)
        elif I == 2:
            if J == 1:
                test_data.input_writeln(13)
            if J == 2:
                test_data.input_writeln(16)
            if J == 3:
                test_data.input_writeln(30)
        elif I == 3:
            test_data.input_writeln((J+2)*10+randint(3,9))
        test_data.output_gen("C.exe")