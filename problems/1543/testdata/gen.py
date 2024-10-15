from cyaron import *
_n = [-1,6,6,8]
INF = 2147483647
IINF = -2147483648

for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            l = randint(10**(J-1),10**J-1)
            r = l
        elif I == 2:
            l = randint(10**(J-1),10**J-1)
            r = randint(10**(J-1),10**J-1)
            if l>r:
                l,r=r,l
        elif I == 3:
            len1 = randint(1,6)
            len2 = randint(1,6)
            while len2==len1:
                len2 = randint(1,6)
            if len1>len2:
                len1,len2=len2,len1
            l = randint(10**(len1-1),10**len1-1)
            r = randint(10**(len2-1),10**len2-1)
            if l>r:
                l,r=r,l
        test_data.input_writeln(l,r)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了