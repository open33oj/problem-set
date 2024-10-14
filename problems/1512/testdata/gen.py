from cyaron import *
_n = [-1,3,5,20]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        n = randint(1E6-100,1E6)
        if I == 1:
            if J == 1:
                x = 3
                a = 3
            if J == 2:
                x = 2
                a = 4
            if J == 3:
                x = 6
                a = 2 
            test_data.input_writeln(x,x,x,a,a,a)
        elif I == 2:
            if J == 1:
                test_data.input_writeln(3,1,2,5,3,4)
            elif J==2:
                test_data.input_writeln(6,4,5,4,5,6)
            elif J==3:
                test_data.input_writeln(3,3,2,1,1,5)
            elif J==4:
                test_data.input_writeln(3,2,2,4,4,3)
            elif J==5:
                test_data.input_writeln(4,1,6,3,5,1)
        elif I == 3:
            now = randint(1,12)
            if now<=3:
                x = randint(1,6)
                y = x
                z = y
            elif now<=6:
                x = randint(3,6)
                y = x-1
                z = x-2
            elif now <= 9:
                x = randint(1,6)
                y = randint(1,6)
                z = x
            else:
                x = randint(1,6)
                y = randint(1,6)
                z = randint(1,6)
            if randint(1,3)==1:
                x,y,z = y,z,x
            elif randint(1,2)==1:
                x,y,z = z,x,y
            else:
                x,y,z = y,x,z
            now = randint(1,12)
            if now<=3:
                a = randint(1,6)
                b = a
                c = b
            elif now<=6:
                a = randint(3,6)
                b = a-1
                c = a-2
            elif now <= 9:
                a = randint(1,6)
                b = randint(1,6)
                c = a
            else:
                a = randint(1,6)
                b = randint(1,6)
                c = randint(1,6)
            if randint(1,3)==1:
                a,b,c = b,c,a
            elif randint(1,2)==1:
                a,b,c = c,a,b
            else:
                a,b,c = b,a,c
            if J == 1:
                test_data.input_writeln(x,y,z,a,b,c)
            elif J==2:
                test_data.input_writeln(x,y,z,a,b,c)
            elif J==3:
                test_data.input_writeln(x,y,z,a,b,c)
            else:
                test_data.input_writeln(x,y,z,a,b,c)
        test_data.output_gen("std.exe")