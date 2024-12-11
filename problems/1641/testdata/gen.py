from cyaron import *
_n = [-1,5,5,5,5]
INF = int(1e9)
print("ok")        
def check2(x):
    if x==1:
        return True
    if x%2==1:
        return False
    return check2(x//2)
def gen(m,maxLen):
    pos = 1
    len = m-1
    ceng = 1
    while len > maxLen:
        pos = pos * 2 + 1
        len -= 1
        ceng += 1
    t = randint(0,m-ceng)
    for i in range(t):
        flag = check2(pos+1)
        if len+1 > maxLen:
            if flag:
                pos = pos * 2 + 1
                len -= 1
            else:
                break
        elif randint(1,3)<=2:
            pos = pos * 2
            len += 1
        else:
            pos = pos * 2 + 1
            if flag:
                len -= 1
            else:
                len += 1
    return pos
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 1
            m = 63
            if J == 1:
                n = 1
                m = 1
            maxId = 2**m-1
            maxLen = randint(min(m+2,(m-1)*2),(m-1)*2)
            print(maxLen)
            a = []
            for i in range(n):
                a.append(gen(m,maxLen))
        if I == 2:
            m = 63-J+1
            if J > 3:
                m = randint(3,63)
            maxId = 2**m-1
            maxLen = randint(0,m)
            print(maxLen)
            n = 100000
            a = []
            for i in range(n):
                a.append(2**randint(maxLen,m)-1)
        if I == 3:
            m = 20
            maxId = 2**m-1
            maxLen = randint(min(m+2,(m-1)*2),(m-1)*2)
            print(m,maxLen)
            n = 100000
            a = []
            for i in range(n):
                a.append(gen(m,maxLen))
        if I == 4:
            m = 63-J+1
            maxId = 2**m-1
            maxLen = randint(min(m+2,(m-1)*2),(m-1)*2)
            n = 100000
            a = []
            for i in range(n):
                a.append(gen(m,maxLen))
        test_data.input_writeln(n,m)
        test_data.input_writeln(a)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
