from cyaron import *
INF = int(2e9)
INF8 = int(1e8)
INF6 = int(1e6)
for I in range(1, 21):
    test_data = IO(file_prefix="{}".format(I))
    print(I)
    if I <= 6:
        n = 1
        m = randint(1,2000000000//1024//1024)
        if I == 1:
            x = m * 1024 * 1024 // 4 
        elif I == 2:
            x = m * 1024 * 512 // 4
        elif I == 3:
            x = m * 1024 * 1024  // 4 - 1
        elif I == 4:
            x = m * 1024 * 512  // 4 - 1
        elif I == 5:
            x = m * 1024 * 512  // 4 + 1
        elif I == 6:
            x = 1
        a = [[x]]
    elif I <= 12:
        n = 100
        a = []
        s = 0
        for i in range(n):
            x = randint(1,2000000000)
            s += x
            a.append([x])
        L = s * 4
        R = s * 8
        if I % 2 == 0:
            m = randint(L,R-1)//1024//1024
        else:
            m = randint(R+1,2**63)//1024//1024
    elif I <= 16:
        n = randint(20,30)
        a = []
        s = 0
        for i in range(n):
            ri = randint(1,3)
            now = 1
            nowR = []
            for i in range(ri):
                if ri == 1:
                    x = randint(1,1000000)
                elif ri == 2:
                    x = randint(1,1000)
                else:
                    x = randint(1,100)
                nowR.append(x)
                now *= x
            s += x
            a.append(nowR)
        L = s * 4
        R = s * 8
        if I % 2 == 0:
            m = randint(L,R-1)//1024//1024
        else:
            m = randint((R+1)//1024//1024,1024)
    elif I != 17:
        n = randint(90,100)
        a = []
        s = 0
        for i in range(n):
            ri = randint(1,3)
            now = 1
            nowR = []
            for i in range(ri):
                if ri == 1:
                    x = randint(1,INF)
                elif ri == 2:
                    x = randint(1,INF8)
                else:
                    x = randint(1,100000)
                nowR.append(x)
                now *= x
            s += now
            a.append(nowR)
        L = s * 4
        R = s * 8
        if I % 2 == 1:
            m = randint(L,R-1)//1024//1024
        else:
            m = R//1024//1024+randint(INF6//2,INF6)
        print(L,R,m,m<=2**43)
    else:
        n = 64
        m = 2 ** 43
        s = (2 ** 63) // 4 // 64
        a = []
        for i in range(n):
            if randint(1,2)==1:
                a.append([2**27,2**28])
            else:
                a.append([2**15,2**15,2**25])
    test_data.input_writeln(n,m)
    for x in a:
        test_data.input_write(len(x))
        test_data.input_writeln(x)
    test_data.output_gen("std.exe")
# 随手卡卡，卡不住就算了