from cyaron import *
_n = [-1,10,10,0]
INF = 2147483647
IINF = -2147483648
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            a = []
            if J==1:
                n=5000
            elif J==2:
                n=1
            else:
                n=randint(1,5000)
            D = (10**9)//n
            for i in range(1,n+1):
                a.append(randint((i-1)*D+1,i*D))
        elif I == 2:
            a = []
            if J==1:
                n=5000
            elif J==2:
                n=1
            else:
                n=randint(1,5000)
            D = (10**9)//n
            for i in range(1,n+1):
                a.append(randint(1,i*D))
        elif I == 3:
            pass
            #test_data.input_writeln(randint(1,5e8),randint(1,1e9),randint(1,1e17))
        test_data.input_writeln(n)
        test_data.input_writeln(a)
        test_data.output_gen("std.exe")