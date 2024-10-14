from cyaron import *

'''
for i in range(1,11):
    test_data = IO(file_prefix="{}".format(i))
    n = randint(97,100)
    test_data.input_writeln(n)
    for i in range(n):
        test_data.input_write(randint(1,100))
    test_data.input_writeln()
    m = randint(1,100)
    test_data.input_writeln(m)
    for i in range(m):
        test_data.input_writeln(randint(1,100),randint(1,100))
    test_data.output_gen("std.exe")
'''

_n = [-1,2,5,5]

for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I==1:
            test_data.input_writeln(randint(1,1E4),2,1)
        if I==2:
            x = randint(1,1E3)
            if J % 2 == 1:
                y = randint(x,1E4)
            else:
                y = randint(1,x)
            test_data.input_writeln(x*randint(1,10000//x),x,y)
        if I==3:
            x = randint(1,1E3)
            if J % 2 == 1:
                y = randint(x,1E4)
            else:
                y = randint(1,x)
            test_data.input_writeln(randint(1,1E4),x,y)
        test_data.output_gen("std.exe")