from cyaron import *
_n = [-1,3,3,3,3]
N = int(5e3)
for I in range(1, 5):
    for J in range(1,_n[I]+1):
        print(I,J)
        test_data = IO(file_prefix="{}-{}".format(I,J))
        if I == 1:
            n = 2
            test_data.input_writeln(n)
            tree = Graph.tree(n)
            for edge in tree.iterate_edges():
                test_data.input_writeln(edge.start,edge.end,randint(1,5000))
        if I == 2:
            n = 5000
            test_data.input_writeln(n)
            ans = randint(1,5000)
            for i in range(1,n):
                if i % 2 == 0:
                    test_data.input_writeln(i,i+1,randint(ans,5000))
                else:
                    test_data.input_writeln(i+1,i,randint(ans,5000))
        if I == 3:
            n = 5000
            test_data.input_writeln(n)
            tree = Graph.tree(n)
            ans = randint(1,5000)
            for edge in tree.iterate_edges():
                test_data.input_writeln(edge.start,edge.end,ans)
        if I == 4:
            n = 5000
            test_data.input_writeln(n)
            tree = Graph.tree(n)
            for edge in tree.iterate_edges():
                test_data.input_writeln(edge.start,edge.end,randint(1,5000))
        test_data.output_gen("std.exe")
# 随意一点了
# 回头再来看榜单加强了
