from cyaron import *

_n = [-1,2,4,4]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = randint(1E5-1E4,1E5)
            a = Vector.random(n,[(1,int(1E9))])
            a.sort(reverse = True)
            test_data.input_writeln(n)
            test_data.input_writeln(a)
        elif I == 2:
            n=randint(4500,5000)
            a = Vector.random(n,[(1,int(1E9))])
            test_data.input_writeln(n)
            test_data.input_writeln(a)
        elif I == 3:
            n = randint(1E5-1E4,1E5)
            a = Vector.random(n,[(1,int(1E9))])
            if J == 1:
                a.sort()
                x = randint(1,n)
                y = randint(1,n)
                while x==y:
                    y = randint(1,n)
                a[x-1],a[y-1] = a[y-1],a[x-1]
            test_data.input_writeln(n)
            test_data.input_writeln(a)
        test_data.output_gen("std.exe")