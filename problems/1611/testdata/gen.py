from cyaron import *

_n = [-1,5,2,5,5]
_test = [
    [],
    ["","3231","9015","0123","0303","6789"],
    ["","6868","8686"],
    ["","3828","6016","8608","8363","1863"],
    ["","6688","8886","3666","8008","0008"]
]
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        test_data = IO(file_prefix="{}-{}".format(I,J),)
        test_data.input_writeln(_test[I][J])
        test_data.output_gen("std.exe")


