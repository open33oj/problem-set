from cyaron import *
_n = [-1,7,5,5]
s = list("abcdefghijklmnopqrstuvwxyz")
def ran(l):
    for i in range(100):
        x = randint(0,l-1)
        y = randint(0,l-1)
        s[x],s[y] = s[y],s[x]
def f(l,r):
    for i in range(l,r):
        for j in range(i,r+1):
            if ord(s[i])>ord(s[j]):
                s[i],s[j] = s[j],s[i]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J == 1:
                test_data.input_writeln("op")
                test_data.input_writeln("po")
            if J == 2:
                test_data.input_writeln("po")
                test_data.input_writeln("op")
            if J == 3:
                test_data.input_writeln("op")
                test_data.input_writeln("op")
            if J == 4:
                test_data.input_writeln("wt")
                test_data.input_writeln("tw")
            if J == 5:
                test_data.input_writeln("wt")
                test_data.input_writeln("wt")
            if J == 6:
                test_data.input_writeln("wt")
                test_data.input_writeln("xs")
            if J == 7:
                test_data.input_writeln("tw")
                test_data.input_writeln("xs")
        elif I == 2:
            l = 26-J+1
            ran(l)
            if J%2==0:
                now = ""
                for i in range(l):
                    now+=s[i]
                test_data.input_writeln(now)
                ran(l)
                now = ""
                for i in range(l):
                    now+=s[i]
                test_data.input_writeln(now)
            else:
                now = ""
                for i in range(l):
                    now+=s[i]
                test_data.input_writeln(now)
                t = randint(1,5)
                last = 0
                for i in range(t):
                    x = randint(last,l-1)
                    y = randint(last,l-1)
                    if x>y:
                        x,y=y,x
                    f(x,y)
                    last = x
                now = ""
                for i in range(l):
                    now+=s[i]
                test_data.input_writeln(now)        
        elif I == 3:
            l = 26-J+1
            ran(l)
            if J%2==0:
                now = ""
                for i in range(l):
                    now+=s[i]
                test_data.input_writeln(now)
                ran(l)
                now = ""
                for i in range(l):
                    now+=s[i]
                test_data.input_writeln(now)
            else:
                now = ""
                for i in range(l):
                    now+=s[i]
                test_data.input_writeln(now)
                if J == 3:
                    ran(l)
                t = randint(1,5)
                last = 0
                for i in range(t):
                    x = randint(last,l-1)
                    y = randint(last,l-1)
                    if x>y:
                        x,y=y,x
                    f(x,y)
                    last = x
                now = ""
                for i in range(l):
                    now+=s[i]
                test_data.input_writeln(now)   
        test_data.output_gen("std.exe")