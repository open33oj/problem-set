from cyaron import *
_n = [-1,3,3,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            L = randint(4500,5000)
            M = randint(1,100)
            maxLen = L//M
            x = 1
            test_data.input_writeln(L,M,x)
            for i in range(M):
                l = randint(0,L)
                r = randint(l,min(L,l+maxLen-1))
                test_data.input_writeln(l,r)
        elif I == 2:
            L = randint(4500,5000)
            M = randint(1,100)
            maxLen = 1
            x = randint(L//M,2*L//M)
            test_data.input_writeln(L,M,x)
            for i in range(M):
                l = randint(0,L)
                r = randint(l,min(L,l+maxLen-1))
                test_data.input_writeln(l,r)
        elif I == 3:
            L = randint(4500,5000)
            M = randint(1,100)
            maxLen = L//M
            x = randint(1,L//M)
            test_data.input_writeln(L,M,x)
            for i in range(M):
                l = randint(0,L)
                r = randint(l,min(L,l+maxLen-1))
                test_data.input_writeln(l,r)
        test_data.output_gen("std.exe")
# 语法周赛，数据造的比较随意，懒得卡一些边界了。