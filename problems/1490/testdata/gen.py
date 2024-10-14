from cyaron import *

s = []
for i in range(100010):
    now = String.random(4)
    while now in s:
        now = String.random(4)
    s.append(now)
print("ok")
_n = [-1,2,4,4]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n=1
            m=randint(900,1000)
            test_data.input_writeln(n,m)
            if J == 1:
                test_data.input_writeln(s[randint(1,m)])
            else:
                test_data.input_writeln(s[randint(m+1,m+10)])
            for i in range(m):
                test_data.input_write(s[i])
            test_data.input_writeln()
        elif I == 2:
            n=randint(900,1000)
            m=randint(900,1000)
            test_data.input_writeln(n,m)
            nl = Vector.random(n, [(1,2000)])
            ml = Vector.random(m, [(1,2000)])
            for i in nl:
                test_data.input_write(s[i[0]])
            test_data.input_writeln()
            for i in ml:
                test_data.input_write(s[i[0]])
            test_data.input_writeln()
        elif I == 3:
            n=randint(50000-100,50000)
            m=randint(50000-100,50000)
            test_data.input_writeln(n,m)
            nl = Vector.random(n, [(1,100000)])
            ml = Vector.random(m, [(1,100000)])
            for i in nl:
                test_data.input_write(s[i[0]])
            test_data.input_writeln()
            for i in ml:
                test_data.input_write(s[i[0]])
            test_data.input_writeln()
        test_data.output_gen("std.exe")