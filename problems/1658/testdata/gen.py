from cyaron import *
_n = [-1,2,3,3,3]
INF18 = int(1e16)
INF5 = int(1e8)
INF10 = int(1e10)
_t = [[0],[1],[2],[[13,35,79],[48,19,73],[1000,239,147]],[[100000,23333,15555],[99999,20,13333],[99999,99997,13333]]]
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 3
            if J == 1:
                g = ["###","#.#","###"]
            else:
                g = ["###","#@#","###"]
        if I == 2:
            n = 500
            g = []
            for i in range(n):
                now = ""
                for j in range(n):
                    if i==0 or i == n-1 or j==0 or j == n-1:
                        now += "#"
                    else:
                        f = randint(1,10)
                        if f <= 1:
                            now += "#"
                        elif f <= 4:
                            now += "@"
                        else:
                            now += "." 
                g.append(now)
        if I == 3:
            n = 500
            g = []
            for i in range(n):
                now = ""
                for j in range(n):
                    if i==0 or i == n-1 or j==0 or j == n-1:
                        now += "#"
                    else:
                        f = randint(1,10)
                        if f <= 5:
                            now += "#"
                        else:
                            now += "."  
                g.append(now)
        if I == 4:
            n = 500
            g = []
            if J == 3:
                for i in range(n):
                    now = ""
                    f = randint(0,n-1)
                    for j in range(n):
                        if i==0 or i == n-1 or j==0 or j == n-1 or i % 50 == 0 or j % 100 == 0:
                            now += "#"
                        else:
                            if j == f:
                                now += "@"
                            else:
                                now += "."  
                    g.append(now)
            else:
                for i in range(n):
                    now = ""
                    for j in range(n):
                        if i==0 or i == n-1 or j==0 or j == n-1:
                            now += "#"
                        else:
                            f = randint(1,10)
                            if f <= 4:
                                now += "#"
                            elif f <= 9:
                                now += "@"
                            else:
                                now += "."  
                    g.append(now)
        test_data.input_writeln(n)
        for x in g:
            test_data.input_writeln(x)
        test_data.output_gen("std.exe")
# 懒得卡守城率相同的了