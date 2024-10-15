from cyaron import *
_n = [-1,2,3,5]
ss = [["XAYAZA","BQCQOQ"],
      ["XXXXXX","YAMAYA","HLHLYL"],
      ["YOMIHO","PAPAPA","QEWERE","BOPANA","ABCBDO"]]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        s = ss[I-1][J-1]
        test_data.input_write(s)    
        test_data.output_gen("std.exe")