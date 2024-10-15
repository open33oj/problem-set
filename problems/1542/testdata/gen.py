from cyaron import *
_n = [-1,6,4,10]
INF = 2147483647
IINF = -2147483648

for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            a = []
            if J%2==1:
                x = randint(0,21)
                a = [x,x+1,x+2,x+3,x+4]
            else:
                x = randint(0,21)
                if J==2:
                    a = [x,x+1,x+3,x+4,x+5]
                elif J==4:
                    a = [x,x+1,x+2,x+3,x+5]
                else:
                    a = [x,x+1,x+2,x+4,x+5]
        elif I == 2:
            a = [0,1,2,3,4]
            for i in range(10):
                x = randint(0,4)
                y = randint(0,4)
                a[x],a[y] = a[y],a[x]
        elif I == 3:
            if J%2==1:
                x = randint(0,21)
                a = [x,x+1,x+2,x+3,x+4]
                for i in range(10):
                    x = randint(0,4)
                    y = randint(0,4)
                    a[x],a[y] = a[y],a[x]
            else:
                if J % 4 == 0:
                    x = randint(0,21)
                    a = [x,x+1,x+2,x+3,x+5]
                    for i in range(10):
                        x = randint(0,4)
                        y = randint(0,4)
                        a[x],a[y] = a[y],a[x]
                else:
                    x = randint(0,21)
                    a = [x,x+1,x+2,x+4,x+5]
                    for i in range(10):
                        x = randint(0,4)
                        y = randint(0,4)
                        a[x],a[y] = a[y],a[x]
        s = ""
        for i in range(5):
            s = s+chr(a[i]+ord('a'))
        test_data.input_writeln(s)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了