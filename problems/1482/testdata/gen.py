from cyaron import *

cnt = [-1,5,5,10]
for I in range(1, 4):
    for J in range(1,cnt[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            a = randint(-1E9,1E9)
            b = randint(-1E9,1E9)
            if J == 5:
                b = a
        elif I == 2:
            a = str(randint(1,9))
            b = str(randint(1,9))
            if J % 2 == 1:
                len = randint(20,99)
                for i in range(len):
                    a += str(randint(0,9))
                    b += str(randint(0,9))
            else:
                lena = randint(20,99)
                lenb = randint(20,99)
                for i in range(lena):
                    a += str(randint(0,9))
                for i in range(lenb):
                    b += str(randint(0,9))
            if J == 5:
                b=a
        else:
            a = str(randint(1,9))
            b = str(randint(1,9))
            if J <= 2:
                len = randint(20,99)
                for i in range(len):
                    a += str(randint(0,9))
                    b += str(randint(0,9))
                if J == 2:
                    a = "-"+a
                    b = "-"+b
            elif J <= 4:
                len = randint(20,99)
                for i in range(len):
                    a += str(randint(0,9))
                    b += str(randint(0,9))
                if J == 3:
                    a = "-"+a
                else:
                    b = "-"+b
            else:
                lena = randint(20,99)
                lenb = randint(20,99)
                for i in range(lena):
                    a += str(randint(0,9))
                for i in range(lenb):
                    b += str(randint(0,9))
                if J == 6:
                    a = "-"+a
                if J == 7:
                    b = "-"+b
                if J == 8:
                    a = "-"+a
                    b = "-"+b
                if J == 10:
                    b=a
        test_data.input_writeln(a)
        test_data.input_writeln(b)
        test_data.output_gen("std.exe")
