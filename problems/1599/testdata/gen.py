from cyaron import *
import huffman

'''
huffman.codebook([('A', 2), ('B', 4), ('C', 1), ('D', 1)])
{'A': '10', 'B': '0', 'C': '110', 'D': '111'}
'''

_n = [-1,4,4,4,4]
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J),)
        if I == 1:
            if J==1:
                test_data.input_writeln(1)
                test_data.input_writeln(333)
                test_data.input_writeln("0")
            if J==2:
                test_data.input_writeln(1)
                test_data.input_writeln(33)
                test_data.input_writeln("1")
            if J==3:
                test_data.input_writeln(1)
                test_data.input_writeln(1000)
                test_data.input_writeln("01")
            if J==4:
                test_data.input_writeln(1)
                test_data.input_writeln(1)
                test_data.input_writeln("10")
        elif I==2:
            n = randint(58,60)
            a = []
            for i in range(n):
                a.append([i,randint(1,1000)])
            res = huffman.codebook(a)
            test_data.input_writeln(n)
            for i in range(n):
                test_data.input_write(a[i][1])
            for i in range(n):
                test_data.input_writeln(res[i])            
        elif I==3: 
            n = randint(58,60)
            a = []
            for i in range(n):
                a.append([i,randint(1,1000)])
            res = huffman.codebook(a)
            test_data.input_writeln(n)
            for i in range(3):
                x = randint(0,n-1)
                y = randint(0,n-1)
                a[x][1],a[y][1] = a[y][1],a[x][1]
            for i in range(n):
                test_data.input_write(a[i][1])
            for i in range(n):
                test_data.input_writeln(res[i]) 
        else:
            n = randint(58,60)
            a = []
            for i in range(n):
                a.append([i,randint(1,1000)])
            res = huffman.codebook(a)
            test_data.input_writeln(n)
            flag = True
            for i in range(n):
                test_data.input_write(a[i][1])
            for i in range(n):
                if flag and randint(1,10)==1:
                    flag = False
                    temp = list(res[i])
                    pos = randint(0,len(res[i])-1)
                    temp[pos] = str(1-int(temp[pos]))   
                    test_data.input_writeln(''.join(temp))                 
                else:
                    test_data.input_writeln(res[i]) 
        test_data.output_gen("std.exe")
# 语法周赛随意一点了


