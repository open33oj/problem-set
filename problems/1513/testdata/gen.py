from cyaron import *
_n = [-1,10,10,10]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            x = randint(1,10)
            y = randint(1,10)
            l = randint(1,1E6)
            r = l
            s = randint(1,22)
            if J == 1:
                e = s
            else:
                e = randint(s+1,23)
        elif I == 2:
            x = randint(1,10)
            y = randint(1,10)
            l = randint(1,1E12)
            r = randint(1,1E12)
            if l>r:
                l,r = r,l
            if J==1:
                r = l
            s = 8
            e = 21
        elif I == 3:
            x = randint(1,10)
            y = randint(1,10)
            l = randint(1,1E12)
            r = randint(1,1E12)
            if l>r:
                l,r = r,l
            s = randint(8,21)
            e = randint(8,21)
            if l == r and s > e:
                s,e=e,s
        print(x,y,l,s,r,e)
        test_data.input_writeln(x,y,l,s,r,e)
        test_data.output_gen("std.exe")