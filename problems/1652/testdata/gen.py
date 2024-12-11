from cyaron import *
_n = [-1,5,5,5,5]
N = int(1e6)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 5000-randint(1,100)
            s = ""
            for i in range(n):
                s = s + chr(ord('A')+randint(0,3))
            a=b=c=d=0
            for i in s:
                if i=='A':
                    a+=1
                elif i=='B':
                    b+=1
                elif i=='C':
                    c+=1
                elif i=='D':
                    d+=1
        if I == 2:
            n = 5000-randint(1,100)
            s = ""
            for i in range(n):
                s = s + chr(ord('A')+randint(0,3))
            a=n
            b=c=d=0
        if I == 3:
            n = randint(8,10)
            s = ""
            for i in range(n):
                s = s + chr(ord('A')+randint(0,3))
            a = randint(0,n)
            b = randint(0,n-a)
            c = randint(0,n-a-b)
            d = n-a-b-c
        if I == 4:
            n = 5000
            s = ""
            for i in range(n):
                s = s + chr(ord('A')+randint(0,3))
            a = randint(0,n)
            b = randint(0,n-a)
            c = randint(0,n-a-b)
            d = n-a-b-c
        test_data.input_writeln(n,a,b,c,d)
        test_data.input_writeln(s)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
