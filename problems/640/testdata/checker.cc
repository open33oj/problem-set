#include "testlib.h"
#include <string>
#include <iostream>
int main(int argc, char *argv[])
{
    setName("test");
    registerTestlibCmd(argc, argv);
    
    std::string s = inf.readWord();
    std::string s1 = ouf.readWord();
    std::string s2 = ouf.readWord();
    
    if (s != s1 && s == s2)
        quitf(_ok, "AC! %d ~ %d ~ %d", s.length(), s1.length(), s2.length());
    else
        quitf(_wa, "WA! %d ~ %d ~ %d", s.length(), s1.length(), s2.length());
    quitf(_wa, "format error!");
}