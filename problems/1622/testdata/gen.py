from cyaron import *
_n = [-1,1,9,9,9]
print("ok")        
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I==1:
            test_data.input_writeln(2,2,10)
        if I ==2:
            n = 10-J+1
            m = n
            k = n + 1
            test_data.input_writeln(n,m,k)
        if I == 3:
            n = 10-J+1
            m = 2
            k = n*n
            test_data.input_writeln(n,m,k)
        if I == 4:
            n = 10-J+1
            m = randint(2,max(2,n//2))
            k = (n*(n-1)+(m-2))//(m-1)
            test_data.input_writeln(n,m,k)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
