#include "testlib.h"
#include <string>

// 检查 y 是不是 x 的子序列
bool check(std::string x, std::string y)
{
    int i = 0, j = 0;
    while (i < x.size() && j < y.size())
        if (x[i] == y[j])
        {
            i++;
            j++;
        }
        else
            i++;
    return j == y.size();
}

int main(int argc, char *argv[])
{
    registerTestlibCmd(argc, argv);
    std::string s = inf.readLine();
    std::string t = inf.readLine();
    std::string lcs = ans.readLine();
    std::string jlcs = ouf.readLine();
    if (lcs.size() != jlcs.size() ||
        !check(s, lcs) ||
        !check(t, lcs))
        quitf(_wa, "wa");
    quitf(_ok, "ok");
}