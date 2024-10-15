from cyaron import *
_n = [-1,1,4,10]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 3
        elif I == 2:
            n = 10-(J-1)*2
        elif I == 3:
            n = 100 - J * 10 + randint(1,10)
        test_data.input_write(n)    
        test_data.output_gen("std.exe")