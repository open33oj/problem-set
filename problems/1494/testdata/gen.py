from cyaron import *
code = [
    "-----",
    ".----",
    "..---",
    "...--",
    "....-",
    ".....",
    "-....",
    "--...",
    "---..",
    "----.",
    ".-",
    "-...",
    "-.-.",
    "-..",
    ".",
    "..-.",
    "--.",
    "....",
    "..",
    ".---",
    "-.-",
    ".-..",
    "--",
    "-.",
    "---",
    ".--.",
    "--.-",
    ".-.",
    "...",
    "-",
    "..-",
    "...-",
    ".--",
    "-..-",
    "-.--",
    "--.."
]
_n = [-1,3,3,5]
for I in range(1, 4):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            test_data.input_writeln(code[randint(0,35)])
        elif I == 2:
            n = randint(10,20)
            s = ""
            s+=code[randint(0,9)]
            for i in range(n-1):
                s+="\\"+code[randint(0,9)]
            test_data.input_writeln(s)
        elif I == 3:
            n = randint(10,20)
            s = ""
            s+=code[randint(0,35)]
            for i in range(n-1):
                s+="\\"+code[randint(0,35)]
            test_data.input_writeln(s)
        test_data.output_gen("std.exe")