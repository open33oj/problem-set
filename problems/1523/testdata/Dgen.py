from cyaron import *
_n = [-1,2,5,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            if J == 1:
                test_data.input_writeln("L")
                test_data.input_writeln("o")
            if J == 2:
                test_data.input_writeln("R")
                test_data.input_writeln("o")
        elif I == 2:
            op = ""
            s = ""
            l = randint(50,100)
            for i in range(l):
                if randint(1,2)==1:
                    op += "L"
                else:
                    op += "R"
                s += "o"   
            test_data.input_writeln(op)
            test_data.input_writeln(s)          
        elif I == 3:
            op = ""
            s = ""
            l = randint(50,100)
            for i in range(l):
                if randint(1,2)==1:
                    op += "L"
                else:
                    op += "R"
                if randint(1,3)<=2:
                    s += "o"
                else:
                    s += "x"     
            test_data.input_writeln(op)
            test_data.input_writeln(s)   
        test_data.output_gen("D.exe")