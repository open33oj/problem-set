from cyaron import *
_n = [-1,5,10,10]
nn = []
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 275
            if J == 1:
                m = 150
            elif J == 2:
                m = 450
            elif J == 3:
                m = 600
            elif J == 4:
                m = 601
            else:
                m = int(1e9)     
        elif I == 2:
            m = 0
            if J == 1:
                n = int(1e9)
            else:
                n = randint(1,8000)
                while n in nn:
                    n = randint(1,8000)
        elif I == 3:
            n = randint(1,8000)
            while n in nn:
                n = randint(1,8000)
            if J == 1:
                m = int(1e9)
            else:
                m = randint(1,7500)
        nn.append(n)
        test_data.input_writeln(n,m)
        test_data.output_gen("std.exe")