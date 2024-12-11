from cyaron import *
_n = [-1,2,4,3,4]
INF18 = int(1e16)
INF5 = int(1e8)
INF10 = int(1e10)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J == 1:
                s = "1"
            else:
                s = "0"
        if I == 2:
            s = "1"*(int(1E5)-J+1)
        if I == 3:
            len = 100-J+1
            s = ""
            for i in range(len):
                if randint(1,3)==1:
                    s+="0"
                else:
                    s+="1"
        if I == 4:
            len = int(1E5)-J+1
            s = ""
            if J == 1:
                l1000 = 33 # l1000
                for i in range(len):
                    if i == l1000-1 or i == l1000+1000:
                        s+="0"
                    elif 0<=i-l1000<1000:
                        s+="1"
                    elif randint(1,3)==1:
                        s+="0"
                    else:
                        s+="1"
            elif J==2:
                l1000 = 3000 # l1000
                l2003 = 20000 # l1000
                for i in range(len):
                    if i == l1000-1 or i == l1000+1000:
                        s+="0"
                    elif 0<=i-l1000<1000:
                        s+="1"
                    elif i == l2003-1 or i == l2003+2003:
                        s+="0"
                    elif 0<=i-l2003<2003:
                        s+="1"
                    elif randint(1,3)==1:
                        s+="0"
                    else:
                        s+="1"
            elif J==3:
                l1000 = 20000 # l1000
                l1999 = 30000 # l1000
                for i in range(len):
                    if i == l1000-1 or i == l1000+1000:
                        s+="0"
                    elif 0<=i-l1000<1000:
                        s+="1"
                    elif i == l1999-1 or i == l1999+1999:
                        s+="0"
                    elif 0<=i-l1999<1999:
                        s+="1"
                    elif randint(1,3)==1:
                        s+="0"
                    else:
                        s+="1"
            else:
                for i in range(len):
                    if randint(1,3)==1:
                        s+="0"
                    else:
                        s+="1"
        test_data.input_writeln(s)
        test_data.output_gen("std.exe")
# 懒得卡守城率相同的了