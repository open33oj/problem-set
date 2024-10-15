from cyaron import *
_n = [-1,2,9,9]
INF = 2147483647
IINF = -2147483648

for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        a = []
        if I == 1:
            n = 1
            if J==1:
                a.append(33)
            elif J==2:
                a.append(2147483647)
            elif J==3:
                a.append(-2147483648)
            x=sum(a)
        elif I == 2:
            n = 1000
            if J == 1:
                s = 1
                e = 2147483647
                d = (e-s)//n
                s = e - (n-1) * d
                for i in range(n):
                    a.append(s+i*d)
                x = sum(a)
            else:
                if J<=5:
                    s = randint(1,INF//1000)
                    e = randint(1,INF//1000)
                else:
                    s = randint(1,INF//10)
                    e = randint(1,INF//10)    
                if s>e:
                    s,e=e,s
                d = (e-s)//n
                for i in range(n):
                    a.append(s+i*d)
                if randint(1,3)==1:
                    a[randint(0,n-1)]+=1
                x = sum(a)                
        elif I == 3:
            n = 1000
            if J == 1:
                s = IINF
                e = INF
                d = (e-s)//n
                s = e - (n-1) * d
                for i in range(n):
                    a.append(s+i*d)
                x = sum(a)
            else:
                if J <= 5:
                    s = randint(IINF//1000,INF//1000)
                    e = randint(IINF//1000,INF//1000)
                else:
                    s = randint(IINF//100,INF//100)
                    e = randint(IINF//100,INF//100)
                if s>e:
                    s,e=e,s
                d = (e-s)//n
                for i in range(n):
                    a.append(s+i*d)
                if randint(1,3)==1:
                    a[randint(0,n-1)]+=1
                x = sum(a)
        test_data.input_writeln(max(min(x,INF),IINF),n)
        test_data.input_writeln(a)              
        test_data.output_gen("std.exe")