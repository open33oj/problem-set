#include "testlib.h"
#include <string>
int s2i(std::string s)
{
    int res = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            res = res * 10 + s[i] - '0';
        else
            return -1;
    }
    return res;
}
int main(int argc, char *argv[])
{
    setName("compares two signed integers");
    registerTestlibCmd(argc, argv);
    std::string filename = inf.readWord();
    std::string userOutput = ouf.readWord();
    if (filename == "1.txt")
    {
        int temp = s2i(userOutput);
        if (0 <= temp && temp <= 100)
            quitf(_ok, "%d is valid!", temp);
        else
            quitf(_wa, "wrong anster incorrect answer (read %d!)", temp);
    }
    else if (filename == "2.txt")
    {
        if (userOutput.length() == 3)
            quitf(_ok, "%s is valid!", userOutput);
        else
            quitf(_wa, "wrong anster incorrect answer (read %s!)", userOutput);
    }
    quitf(_wa, "format error!");
}