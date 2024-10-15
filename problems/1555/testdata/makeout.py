import os
os.system('g++ std.cpp -o std -O2 -Wl,--stack=99999999 -std=c++14')
path = os.getcwd()
for file in os.listdir(path):
    if file.endswith('.in'):
        ouf = file
        ouf=ouf.replace('in','out')
        print('std.exe < '+ file +' > ' + ouf)
        os.system('std.exe < '+ file +' > ' + ouf)
