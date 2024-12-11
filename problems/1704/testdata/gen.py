from cyaron import *
INF9 = int(1E9)
INF7 = int(1E7)
INF6 = int(1E6)
_t = [0, 4, 4, 4]
for I in range(1, 3 + 1):
    for J in range(1, _t[I] + 1):
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 10
            if J%2 == 1:
                s = 3
                e = 3
            else:
                s = 3
                e = 9
            a = [[s,e]]
            for i in range(n-1):
                a.append([randint(1,10),randint(1,10)])
        elif I == 2:
            if J == 1:
                a = [[2,3],[4,5],[5,6]]
                s = 3
                e = 6
            elif J==2:
                a = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7],[7,8],[8,9],[9,10]]
                s = 3
                e = 6
            elif J==3:
                a = [[1,2],[2,3],[3,4],[5,6],[6,7],[7,8],[8,9],[9,10]]
                s = 3
                e = 9
            else:
                a = [[3,4],[4,5],[5,6]]
                s = 3
                e = 6
        elif I == 3:
            n = 10
            s = randint(1,10)
            e = randint(1,10)
            a = []
            for i in range(n):
                a.append([randint(1,10),randint(1,10)])
        test_data.input_writeln(len(a),s,e)
        for x in a:
            test_data.input_writeln(x)
        test_data.output_gen("std.exe")
