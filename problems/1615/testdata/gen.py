from cyaron import *
_n = [-1,6,3,6,5]
print("ok")
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I==1:
            if J == 6:
                n = 33
            else:
                n = 756-J
            m = 756
            test_data.input_writeln(n,m)
        if I ==2:
            n = randint(1,752)
            m = min(n+J,756)
            test_data.input_writeln(n,m)
        if I == 3:
            n = randint(1,719)
            m = 720
            test_data.input_writeln(n,m)
        if I == 4:
            n = randint(1,755)
            m = randint(n+1,756)
            test_data.input_writeln(n,m)
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
