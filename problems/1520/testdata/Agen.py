from cyaron import *
_n = [-1,1,5,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln("20:14")
        elif I == 2:
            test_data.input_writeln("%02d:%02d" %(randint(15,23),randint(0,59)))
        elif I == 3:
            test_data.input_writeln("%02d:%02d" %(randint(0,14),randint(0,59)))
        test_data.output_gen("A.exe")