from cyaron import *
_n = [-1,8,8,4]
INF = 2147483647
IINF = -2147483648
rb = ["rrr","rrb","rbr","rbb","brr","brb","bbr","bbb"]
def gen(st,len):
    s = ""
    for i in range(len):
        s = s+st
        if st == 'r':
            st = 'b'
        else:
            st = 'r'
    return s
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln(3)
            test_data.input_writeln(rb[J-1])
        elif I == 2:
            # r~b 0 b~r 0 r~r 0 b~b 0
            # r~b x b~r x r~r x b~b x
            if J == 1:
                s = gen('r',99998)
            elif J==2:
                s = gen('r',99998)
                pos = randint(0,len(s)-2)
                s = s[0:pos]+'r'+s[pos:]
            elif J==3:
                s = gen('b',99998)
            elif J==4:
                s = gen('b',99998)
                pos = randint(0,len(s)-2)
                s = s[0:pos]+'b'+s[pos:]
            elif J==5:
                s = gen('r',99999)
            elif J==6:
                s = gen('r',99999)
                pos = randint(0,len(s)-2)
                s = s[0:pos]+'b'+s[pos:]
            elif J==7:
                s = gen('b',99999)
            elif J==8:
                s = gen('b',99999)
                pos = randint(0,len(s)-2)
                s = s[0:pos]+'r'+s[pos:]
            test_data.input_writeln(len(s))
            test_data.input_writeln(s)
        elif I == 3:
            # r~bb~b  b~rr~r ~rrr~ ~rr~rr~ 
            if J == 1:
                s = gen('r',99998)
                pos = randint(0,len(s)-2)
                s = s[0:pos]+'b'+s[pos:]
            elif J == 2:
                s = gen('b',99998)
                pos = randint(0,len(s)-2)
                s = s[0:pos]+'r'+s[pos:]
            elif J == 3:
                s = gen('b',99998)
                pos = randint(0,len(s)-2)
                s = s[0:pos]+'rr'+s[pos:]
            elif J == 4:
                s = gen('r',99998)
                pos = randint(0,len(s)-2)
                s = s[0:pos]+'r'+s[pos:]
                pos = randint(0,len(s)-2)
                s = s[0:pos]+'r'+s[pos:]
            test_data.input_writeln(len(s))
            test_data.input_writeln(s)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


