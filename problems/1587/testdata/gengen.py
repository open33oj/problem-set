from cyaron import *
for I in range(1, 11):
    print(I)
    test_data = IO(file_prefix="{}".format(I))
    if I==1:
        n = 10
        m = 8
        x = 9
        s = "0123456789"
    else:
        n = 1000
        m = randint(1,100)
        x = randint(0,9)
        s =  String.random(1000, charset="0123456789")
    test_data.input_writeln(n,m,x)
    test_data.input_writeln(s)
    test_data.output_gen("std.exe")
# 语法周赛随意一点了