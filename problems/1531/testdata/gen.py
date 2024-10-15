from cyaron import *
_n = [-1,3,3,14]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 5000
            m = randint(2,5000)
            mm = m-1
            k = randint(1,n)
            num = 1
            test_data.input_writeln(n,m,k,num)
            for i in range(n):
                cnt = randint(1,mm//2)
                test_data.input_write(randint(1,mm//cnt))
        elif I == 2:
            n = 5000
            m = randint(2,5000)
            mm = m-1
            k = 1
            num = randint(1,5000)
            test_data.input_writeln(n,m,k,num)
            for i in range(n):
                cnt = randint(1,mm//2)
                test_data.input_write(randint(1,mm//cnt))
        elif I == 3:
            n = 5000
            m = randint(2,5000)
            mm = m-1
            k = randint(1,n)
            num = randint(1,5000)
            test_data.input_writeln(n,m,k,num)
            for i in range(n):
                cnt = randint(1,mm//2)
                test_data.input_write(randint(1,mm//cnt))      
        test_data.output_gen("std.exe")