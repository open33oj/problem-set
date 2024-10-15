from cyaron import *
c1 = "qwertyuiopasdfghjklzxcvbnm"
c2 = "QWERTYUIOPASDFGHJKLZXCVBNM"
c3 = "1234567890"
c123 = c1+c2+c3
c4 = "!@#$%^&*()_+{}|:\"<>?-=[]\;',./"
cc = c1 + c2 + c3 + c4
_n = [-1,10,10,10]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        s = ""
        n123 = len(c123)
        nn = len(cc)
        if I == 1:
            for i in range(10000):
                s += c1[randint(0,25)]
        elif I == 2:
            for i in range(10000):
                s += c123[randint(0,n123-1)]
        elif I == 3:
            for i in range(10000):
                s += cc[randint(0,nn-1)]
        test_data.input_writeln(s)
        test_data.output_gen("std.exe")