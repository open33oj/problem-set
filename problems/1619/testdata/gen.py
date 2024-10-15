from cyaron import *
_n = [-1,2,3,3,5]
print("ok")
def f(x):
    pos = []
    for i in range(3):
        pos.append(randint(1,x))
    pos.sort()
    pos.append(x)
    pos[3]=pos[3]-pos[2]
    pos[2]=pos[2]-pos[1]
    pos[1]=pos[1]-pos[0]
    return pos        
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I==1:
            now = randint(1,100)
            for i in range(4):
                for j in range(4):
                    test_data.input_write(now)
                test_data.input_writeln()
        if I ==2:
            a = randint(1,100)
            b = a
            x = randint(2,99)
            if J == 1:
                y = randint(x+1,100)
            if J == 2:
                y = randint(1,x-1)
            if J == 3:
                y = x
            test_data.input_writeln(f(a))
            test_data.input_writeln(f(x))
            test_data.input_writeln(f(b))
            test_data.input_writeln(f(y))
        if I == 3:
            a = randint(1,100)
            if J == 1:
                b = randint(a+1,100)
            if J == 2:
                b = randint(1,a-1)
            if J == 3:
                b = a
            x = randint(1,100)
            y = x
            test_data.input_writeln(f(a))
            test_data.input_writeln(f(x))
            test_data.input_writeln(f(b))
            test_data.input_writeln(f(y))
        if I == 4:
            a = randint(1,100)
            b = randint(1,100)
            x = randint(1,100)
            y = randint(1,100)
            if J == 1:
                # x/a==y/b
                x = 30
                a = 60
                y = 10
                b = 20
            if J == 2:
                # x/a==y/b
                x = 44
                a = 22
                y = 88
                b = 44
            test_data.input_writeln(f(a))
            test_data.input_writeln(f(x))
            test_data.input_writeln(f(b))
            test_data.input_writeln(f(y))
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
