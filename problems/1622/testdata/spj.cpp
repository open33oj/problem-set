#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int n, m, k, t;
set<int> e[105];
bool check()
{
    for (int x = 1; x <= n; x++)
        for (int y = x + 1; y <= n; y++)
        {
            bool flag1 = false, flag2 = false, flag3 = false;
            for (int i = 1; i <= t; i++)
            {
                if (e[i].count(x) && e[i].count(y))
                    flag1 = true;
                if (e[i].count(x) && !e[i].count(y))
                    flag2 = true;
                if (!e[i].count(x) && e[i].count(y))
                    flag3 = true;
                if (flag1 && flag2 && flag3)
                    break;
            }
            if (!flag1 || !flag2 || !flag3)
                return false;
        }
    return true;
}
int main(int argc, char *argv[])
{
    setName("compares two signed integers");
    registerTestlibCmd(argc, argv);
    n = inf.readInt();
    m = inf.readInt();
    k = inf.readInt();
    t = ouf.readInt(1, k);
    for (int i = 1; i <= t; i++)
    {
        int num = ouf.readInt(1, m);
        for (int j = 1; j <= num; j++)
        {
            int x = ouf.readInt(1, n);
            e[i].insert(x);
        }
    }
    if (check())
        quitf(_ok, "ac");
    else
        quitf(_wa, "wa");
}