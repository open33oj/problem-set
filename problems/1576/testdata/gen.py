from cyaron import *
_n = [-1,3,8,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J == 1:
                test_data.input_writeln(1,33520,-1,1,1000000)
            if J == 2:
                test_data.input_writeln(1,33520,-1,1,2)
            if J == 3:
                test_data.input_writeln(1,33520,-1,999999,1000000)
        if I == 2:
            n = 1000000
            a1 = randint(-1000000,1000000)
            if J<=4:
                d = randint(1000000-10000,1000000)
            else:
                d = randint(-1000000,-1000000+10000)
            x = a1
            y = a1 + (n-1)*d
            if x>y:
                x,y=y,x
            if J%4==1:
                # 不相关
                l = x-2
                r = x-1
            elif J%4==2:
                # 踩到两个位置
                l = x + (n/5)*d
                r = x + (n*2/3)*d
            elif J%4==3:
                l = x + (n/5)*d+randint(1,abs(d)-1)
                r = x + (n*2/3)*d+randint(1,abs(d)-1)
            test_data.input_writeln(int(n),int(a1),int(d),int(l),int(r))
        if I == 3:
            n = randint(1e12-1e5,1e12)
            a1 = randint(-1000000,1000000)
            if J<=4:
                d = randint(1000000-10000,1000000)
            else:
                d = randint(-1000000,-1000000+10000)
            x = a1
            y = a1 + (n-1)*d
            if x>y:
                x,y=y,x
            if J%4==1:
                # 不相关
                l = x-2
                r = x-1
            elif J%4==2:
                # 踩到两个位置
                l = x + (n/5)*d
                r = x + (n*2/3)*d
            elif J%4==3:
                l = x + (n/5)*d+randint(1,abs(d)-1)
                r = x + (n*2/3)*d+randint(1,abs(d)-1)
            test_data.input_writeln(int(n),int(a1),int(d),int(l),int(r))
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


