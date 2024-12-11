from cyaron import *
import sys
_n = [-1,4,4,4,4]
N = int(1e5)
INF = int(1e18)
INF9 = int(1e9)
print("ok")   
sys.setrecursionlimit(N)
def dfs(l,r):
    root = randint(l,r)
    if root != l:
        lr[root][0] = dfs(l,root-1)
    if root != r:
       lr[root][1] = dfs(root+1,r)
    return root
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J == 1:
                n = 10
            elif J == 2:
                n = 9
            elif J == 3:
                n = N-1
            else:
                n = N
            a = []
            ai = randint(1,1000)
            for i in range(n):
                a.append(ai)
            lr = [[]]
            for i in range(1,n+1):
                lr.append([0,0])
            dfs(1,n)             
            id = [0,]
            for i in range(1,n+1):
                id.append(i)
                pos = randint(1,i)
                id[i],id[pos]=id[pos],id[i]
            ii = [0,]
            for i in range(1,n+1):
                ii.append(0)   
            for i in range(1,n+1):
                ii[id[i]]=i
        if I == 2:
            if J == 1:
                n = 10
            elif J == 2:
                n = 9
            elif J == 3:
                n = N-1
            else:
                n = N
            a = []
            for i in range(n):
                ai = randint(1,1000)
                a.append(ai)
            lr = [[]]
            for i in range(1,n):
                lr.append([0,i+1]) 
            lr.append([0,0])            
            id = [0,]
            for i in range(1,n+1):
                id.append(i)
                pos = randint(1,i)
                id[i],id[pos]=id[pos],id[i]
            ii = [0,]
            for i in range(1,n+1):
                ii.append(0)   
            for i in range(1,n+1):
                ii[id[i]]=i
        if I == 3:
            n = 100
            a = []
            for i in range(n):
                ai = randint(1,1000)
                a.append(ai)
            lr = [[]]
            for i in range(1,n+1):
                lr.append([0,0])
            dfs(1,n)             
            id = [0,]
            for i in range(1,n+1):
                id.append(i)
                pos = randint(1,i)
                id[i],id[pos]=id[pos],id[i]
            ii = [0,]
            for i in range(1,n+1):
                ii.append(0)   
            for i in range(1,n+1):
                ii[id[i]]=i
        if I == 4:
            if J == 1:
                n = 10
            elif J == 2:
                n = 9
            elif J == 3:
                n = N-1
            else:
                n = N
            a = []
            for i in range(n):
                ai = randint(1,1000)
                a.append(ai)
            lr = [[]]
            for i in range(1,n+1):
                lr.append([0,0])
            dfs(1,n)             
            id = [0,]
            for i in range(1,n+1):
                id.append(i)
                pos = randint(1,i)
                id[i],id[pos]=id[pos],id[i]
            ii = [0,]
            for i in range(1,n+1):
                ii.append(0)   
            for i in range(1,n+1):
                ii[id[i]]=i
        test_data.input_writeln(n)
        test_data.input_writeln(a)
        for i in range(1,n+1):
            # i ~ lr[i][0] ~ lr[i][1]
            now = ii[i]
            test_data.input_writeln(id[lr[now][0]],id[lr[now][1]])
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
