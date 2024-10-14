from cyaron import *

for I in range(1, 4):
    for J in range(1,6):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        slen = randint(95,100)
        cs = ""
        for i in range(26):
            cs += chr(ord('A')+i)
        for i in range(26):
            cs += chr(ord('a')+i)
        for i in range(10):
            cs += chr(ord('0')+i)
        s = String.random(slen, charset=cs)
        if I == 1:
            n = randint(1,slen)
            m = randint(1,slen-n+1)
        elif I == 2:
            n = randint(1,slen)
            if J % 2 == 0:
                m = randint(1,slen-n+1)
            else:
                m = randint(slen-n+1,slen)
        else:
            n = randint(1,slen)
            m = randint(1,500)
        test_data.input_writeln(s)
        test_data.input_writeln(n,m)
        test_data.output_gen("std.exe")
