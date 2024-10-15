from cyaron import *
wTot = 100000
half = 50000
wTot5 = wTot-5
words = []
for i in range(wTot):
    now = chr(ord('a')+i%26)
    now = now+chr(ord('a')+i//26%26)
    now = now+chr(ord('a')+i//26//26%26)
    now = now+chr(ord('a')+i//26//26//26%26)
    words.append(now)
print("ok")
_id = []
for i in range(wTot5):
    _id.append(i)
for i in range(wTot5):
    x = randint(0,wTot5-1)
    y = randint(0,wTot5-1)
    _id[x],_id[y] = _id[y],_id[x]
_n = [-1,1,2,3,4]
print("ok")
#for I in range(1, 5):
for I in [2,3]:
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I==1:
            n = randint(1e5-1e2,1e5)
            m = 0
            test_data.input_writeln(n,m)
            for i in range(n):
                test_data.input_write(words[randint(0,wTot-1)])
            test_data.input_writeln()
        if I ==2:
            n = randint(1e5-1e2,1e5)
            m = randint(half-1e2,half)
            test_data.input_writeln(n,m)
            for i in range(n):
                test_data.input_write(words[randint(0,half-1)]) 
            test_data.input_writeln()    
            for i in range(m):
                test_data.input_write(words[i])  
                num = randint(1,5)
                test_data.input_write(num)
                for j in range(num):
                    test_data.input_write(words[randint(half,wTot-1)]) 
                test_data.input_writeln()  
        if I ==3:
            if J == 1:
                # 一层 200 * 5
                test_data.input_writeln(200,200)
                for i in range(200):
                    test_data.input_write(words[i])
                test_data.input_writeln()
                for j in range(200):
                    if j==3:
                        test_data.input_write(words[205])
                        test_data.input_write(5)
                        for k in range(5):
                            test_data.input_write(words[randint(1000,2000)])
                        test_data.input_writeln()
                    else:
                        test_data.input_write(words[j])
                        test_data.input_write(5)
                        for k in range(5):
                            test_data.input_write(words[randint(1000,2000)])
                        test_data.input_writeln()
            if J == 2:
                # 两层 40 * 5 * 5 
                # 原始 
                test_data.input_writeln(40,39+10)
                for i in range(40):
                    test_data.input_write(words[i])
                test_data.input_writeln()
                for j in range(40):
                    if j == 33:
                        continue
                    test_data.input_write(words[j])
                    test_data.input_write(5)
                    for k in range(5):
                        test_data.input_write(words[randint(100,109)])
                    test_data.input_writeln()
                for j in range(100,110):
                    test_data.input_write(words[j])
                    test_data.input_write(5)
                    for k in range(5):
                        test_data.input_write(words[randint(1000,2000)])
                    test_data.input_writeln()
            if J == 3:
                test_data.input_writeln(5,18)
                test_data.input_writeln(words[0],words[1],words[100],words[1002],words[103])
                for i in range(9):
                    test_data.input_write(words[i*2])
                    test_data.input_write(2)
                    test_data.input_writeln(words[(i+1)*2],words[(i+1)*2+1])
                    test_data.input_write(words[i*2+1])
                    test_data.input_write(2)
                    test_data.input_writeln(words[(i+1)*2],words[(i+1)*2+1])
        if I == 4:
            test_data.input_writeln(100000,half)
            for i in range(100000):
                test_data.input_write(words[randint(0,wTot-1)])
            test_data.input_writeln()
            for j in range(half):
                test_data.input_write(words[_id[j]])
                test_data.input_write(5)
                for k in range(5):
                    test_data.input_write(words[randint(_id[j]+1,wTot-1)])
                test_data.input_writeln()
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
