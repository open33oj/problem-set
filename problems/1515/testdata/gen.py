from cyaron import *
_n = [-1,5,5,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        n = 1000-J+1
        s = ""
        a = []
        for i in range(n):
            a.append(i+1)
        if I == 1:
            for i in range(n):
                s+="f"
            for i in range(n):
                x = randint(0,n-1)
                y = randint(0,n-1)
                a[x],a[y] = a[y],a[x]
        elif I == 2:
            for i in range(n):
                if randint(1,2)==1:
                    s+="f"
                else:
                    s+="m"
        elif I == 3:
            for i in range(n):
                if randint(1,2)==1:
                    s+="f"
                else:
                    s+="m"
            for i in range(n):
                x = randint(0,n-1)
                y = randint(0,n-1)
                a[x],a[y] = a[y],a[x]
        test_data.input_writeln(n)
        test_data.input_writeln(s)
        test_data.input_writeln(a)
        test_data.output_gen("std.exe")