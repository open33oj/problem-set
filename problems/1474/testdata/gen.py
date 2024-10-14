from cyaron import *

for I in range(1, 4):
    for J in range(1,6):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        s  = []
        if I == 1:
            for i in range(20):
                s.append("abcdwotojo"[randint(0,9)])
            pos = randint(0,20-6)
            s[pos] = 'w'
            pos = randint(pos+1,20-5)
            s[pos] = 'o'
            pos = randint(pos+1,20-4)
            s[pos] = 't'
            pos = randint(pos+1,20-3)
            s[pos] = 'o'
            pos = randint(pos+1,20-2)
            s[pos] = 'j'
            pos = randint(pos+1,20-1)
            s[pos] = 'o'
        elif I == 2:
            for i in range(1000):
                s.append("abcd"[randint(0,3)])
            pos = randint(0,1000-6)
            s[pos] = 'w'
            pos = randint(pos+1,1000-5)
            s[pos] = 'o'
            pos = randint(pos+1,1000-4)
            s[pos] = 't'
            pos = randint(pos+1,1000-3)
            s[pos] = 'o'
            pos = randint(pos+1,1000-2)
            s[pos] = 'j'
            pos = randint(pos+1,1000-1)
            s[pos] = 'o'
        else:
            for i in range(1000):
                s.append(chr(ord('a')+randint(0,25)))
            pos = randint(0,1000-6)
            s[pos] = 'w'
            pos = randint(pos+1,1000-5)
            s[pos] = 'o'
            pos = randint(pos+1,1000-4)
            s[pos] = 't'
            pos = randint(pos+1,1000-3)
            s[pos] = 'o'
            pos = randint(pos+1,1000-2)
            s[pos] = 'j'
            pos = randint(pos+1,1000-1)
            s[pos] = 'o'
        ss = ""
        for c in s:
            ss+=c
        test_data.input_writeln(ss)
        test_data.output_gen("std.exe")
