from cyaron import *
_n = [-1,5,5,5,5]
print("ok")        
INF14 = int(1e14)
INF7 = int(1e7)
a101 = []
for i in range(101):
    a101.append(i)
print(a101)
def r():
    for i in range(100):
        x = randint(0,100)
        y = randint(0,100)
        a101[x],a101[y]=a101[y],a101[x]
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I==1:
            n = 1
            test_data.input_writeln(n)
            for i in range(n):
                num = 100-J+1
                test_data.input_write(num)
                r()
                for j in range(num):
                    test_data.input_write(a101[j])
                test_data.input_writeln()
        if I ==2:
            n = 2
            test_data.input_writeln(n)
            for i in range(n):
                num = 100//(i+1)
                test_data.input_write(num)
                r()
                for j in range(num):
                    test_data.input_write(a101[j])
                test_data.input_writeln()
        if I == 3:
            a = []
            mul = 1
            while True:
                numi = randint(1,5)
                if mul*numi > 1000000:
                    break
                a.append(numi)
                mul *= numi
            n = len(a)
            test_data.input_writeln(n)
            for i in range(n):
                test_data.input_write(a[i])
                r()
                for j in range(a[i]):
                    test_data.input_write(a101[j])
                test_data.input_writeln()
        if I == 4:
            n = randint(90,100)
            test_data.input_writeln(n)
            for i in range(n):
                numi = randint(1,100)
                test_data.input_write(numi)
                r()
                for j in range(numi):
                    test_data.input_write(a101[j])
                test_data.input_writeln()
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
