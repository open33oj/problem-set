from cyaron import *

for I in range(1, 4):
    for J in range(1,6):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        n = randint(1,1000)*10
        a1 = randint(1,1000)
        a2 = randint(1,1000)
        a3 = randint(1,1000)
        a4 = randint(1,1000)
        a = a1+a2+a3+a4
        if I==1:
            x = randint(a*10//4+10,10000)
            y = randint(1,a*2)
        elif I == 2:
            x = randint(1,a*10//4)
            y = randint(a*2,10000)
        else:
            if J%3 == 1:
                x = randint(1,a*10//4)
                y = randint(1,a*2)
            elif J%3==2:
                x = randint(a*10//4+10,10000)
                y = randint(1,a*2)
            else:
                x = randint(1,a*10//4)
                y = randint(a*2,10000)
        test_data.input_writeln(n,x,y)
        test_data.input_writeln(a1,a2,a3,a4)        
        test_data.output_gen("std.exe")
