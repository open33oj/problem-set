from cyaron import *
INF9 = int(1E9)
_t = [0, 4, 4, 4]
def f(len):
    t = ""
    for i in range(len):
        if randint(1,2) == 1:
            t += chr(ord('A')+randint(0,25))
        else:
            t += chr(ord('a')+randint(0,25))
    return t
for I in range(1, 3 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J<=3:
                s = f(J)
            else:
                s = f(randint(100,1000))
        elif I == 2:
            n = randint(40,50)
            s = ""
            for i in range(n):
                s = s + f(randint(1,10)) + " "
        elif I == 3:
            n = randint(40,50)
            s = ""
            for i in range(n):
                s = s + f(randint(1,10))
                if randint(1,2)==1:
                    x = randint(1,3)
                    s+=" "*5
                if randint(1,2)==1:
                    s+="."
                if randint(1,2)==1:
                    x = randint(1,3)
                    s+=" "*5
        test_data.input_writeln(s)
        test_data.output_gen("std.exe")
