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

a = ["am","is","are"]
b = ["i","you"]
for i in range(100):
    b.append(String.random(5))
_n = [-1,3,5,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I==1:
            test_data.input_write("cat")
            for i in range(49):
                if randint(1,10)<=5:
                    test_data.input_write("cat")
                else:
                    test_data.input_write(a[randint(0,2)])
        if I==2:
            test_data.input_write(b[randint(0,1)])
            test_data.input_write(a[randint(0,2)])
            for i in range(4):
                if randint(1,10)<=5:
                    test_data.input_write(b[randint(0,1)])
                    test_data.input_write(a[randint(0,2)])
                else:
                    test_data.input_write(a[randint(0,2)])
                    test_data.input_write(b[randint(0,100)])
        if I==3:
            test_data.input_write(b[randint(0,1)])
            for i in range(49):
                if randint(1,10)<=5:
                    test_data.input_write(b[randint(0,1)])
                    test_data.input_write(a[randint(0,2)])
                else:
                    test_data.input_write(a[randint(0,2)])
                    test_data.input_write(b[randint(0,100)])
        test_data.output_gen("std.exe")