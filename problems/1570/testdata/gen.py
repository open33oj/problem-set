from cyaron import *
_n = [-1,12,12,12] #相等（++ +- -+ --） 加1 减少1
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J <= 4:
                a=randint(1e9-1e6,1e9)
                b=a
            elif J<=8:
                a = randint(1e9-1e6,1e9)
                b = a+randint(1,1e5)
            else:
                a = randint(1e9-1e6,1e9)
                b = a-randint(1,1e5)
            a = str(a)
            b = str(b)
        else:
            lenA = randint(900,1000)
            a = str(randint(1,9))
            for i in range(lenA-1):
                a = a+str(randint(0,9))
            if J<=4:
                b = a
            elif J<=8:
                pos = randint(0,lenA-1)
                while a[pos] == '9':
                    pos = randint(0,lenA-1)
                b = ""
                for i in range(lenA):
                    if i != pos:
                        b = b + a[i]
                    else:
                        b = b + str(int(a[pos])+1)
            else:
                pos = randint(0,lenA-1)
                while a[pos] == '0':
                    pos = randint(0,lenA-1)
                b = ""
                for i in range(lenA):
                    if i != pos:
                        b = b + a[i]
                    else:
                        b = b + str(int(a[pos])-1)
        if I != 2:
            zeroA = randint(5,100)
            if randint(1,3)==1:
                zeroB=zeroA
            elif randint(1,2)==1:
                zeroB=zeroA+1
            else:
                zeroB=zeroA-1
            for i in range(zeroA):
                a="0"+a
            for i in range(zeroB):
                b="0"+b   
        if J % 4 == 2:
            a = "-"+a
        if J % 4 == 3:
            b = "-"+b
        if J % 4 == 0:
            a = "-"+a
            b = "-"+b        
        test_data.input_writeln(a)
        test_data.input_writeln(b)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


