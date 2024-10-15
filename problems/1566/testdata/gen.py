from cyaron import *
_n = [-1,6,10,10]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J <= 2:
                a=randint(1,1000000000)
                b=a
            elif J<=4:
                a = randint(1,1000000000)
                b = randint(a+1,1000000000)
            else:
                a = randint(1,1000000000)
                b = randint(1,a-1)
            a = str(a)
            b = str(b)
        else:
            lenA = randint(900,1000)
            a = str(randint(1,9))
            for i in range(lenA-1):
                a = a+str(randint(0,9))
            if J<=2:
                b = a
            elif J<=6:
                pos = randint(0,lenA-1)
                b = ""
                for i in range(lenA):
                    if i != pos:
                        b = b + a[i]
                    else:
                        x = str(randint(0,9))
                        while x == a[i]:
                            x = str(randint(0,9))
                        b=b+x
            else:
                lenB = randint(900,1000)
                b = str(randint(1,9))
                for i in range(lenB-1):
                    b = b+str(randint(0,9))
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
        test_data.input_writeln(a)
        test_data.input_writeln(b)
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


