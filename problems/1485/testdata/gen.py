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

_n = [-1,5,5,6]

for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I==1:
            if J == 1:
                test_data.input_writeln(120)
            else:                
                test_data.input_writeln(randint(1,120))
        if I==2:
            if J == 1:
                test_data.input_writeln(360)
            else:                
                test_data.input_writeln(randint(121,360))
        if I==3:
            if J % 3 == 1:
                test_data.input_writeln(120*randint(1,1000000//120))
            elif J %3==2:
                test_data.input_writeln(360*randint(1,1000000//360))
            else:
                test_data.input_writeln(randint(1,1E6))
        test_data.output_gen("std.exe")