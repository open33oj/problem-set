from cyaron import *
_n = [-1,10,10,10]
nn = []
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J == 1:
                n = 0
            elif J == 2:
                n = 23
            else:
                n = randint(1,22)
                while n in nn:
                    n = randint(1,22)                
        elif I == 2:
            if J == 1:
                n = 24
            elif J == 2:
                n = 80
            else:
                r = randint(3,10)*2
                n = r*4+randint(0,3)
                while n in nn:
                    r = randint(3,10)*2
                    n = r*4+randint(0,3)
        elif I == 3:
            if J == 1:
                n = 28
            elif J == 2:
                n = 76
            else:
                r = randint(3,9)*2+1
                n = r*4+randint(0,3)
                while n in nn:
                    r = randint(3,9)*2+1
                    n = r*4+randint(0,3)
        nn.append(n)
        test_data.input_writeln(n)
        test_data.output_gen("std.exe")