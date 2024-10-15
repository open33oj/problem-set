from cyaron import *
for I in range(1, 11):
    test_data = IO(file_prefix="{}".format(I))
    if I == 1:
        now = ""
        for i in range(100):
            now = now + "0"
    elif I == 2:
        now = ""
        for i in range(100):
            now = now + "1"
    elif I == 3:
        now = "1"
        for i in range(99):
            now = now + "0"
    elif I == 4:
        now = "0"
        for i in range(99):
            now = now + "1"
    else:
        num = randint(1,100)
        now = "1"
        for i in range(99-num):
            now = now + str(randint(0,1))
        for i in range(num):
            now = now + "0"
    test_data.input_writeln(now)
    test_data.output_gen("std.exe")
# 语法周赛随意一点了


