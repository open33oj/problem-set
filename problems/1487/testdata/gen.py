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

_n = [-1,5,5,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        n = 1000
        m = randint(0,1000)
        a = []
        maxAi = 100
        if I==1:
            m = 0
        if I==2:
            maxAi = 1
        for i in range(n):
            a.append(randint(1,maxAi))
        b = Vector.random(m,[(1,n)])
        test_data.input_writeln(n,m)
        test_data.input_writeln(a)
        test_data.input_writeln(b)
        test_data.output_gen("std.exe")