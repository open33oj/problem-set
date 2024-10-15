from cyaron import *
for I in range(1, 11):
    print(I)
    test_data = IO(file_prefix="{}".format(I))
    if I==1:
        n = 1
        a = [33]
    elif I==2:
        n = 100
        a = []
        for i in range(n):
            a.append(33)
    elif I==3:
        n = 100
        a = []
        for i in range(n):
            a.append(randint(-1e9,1e9))
        a.sort()
    elif I==4:
        n = 100
        a = []
        for i in range(n):
            a.append(randint(-1e9,1e9))
        a.sort(reverse=True)
    else:
        n = 100
        a = []
        for i in range(n):
            a.append(randint(-1e9,1e9))
    test_data.input_writeln(n)
    test_data.input_writeln(a)
    test_data.output_gen("std.exe")
# 语法周赛随意一点了