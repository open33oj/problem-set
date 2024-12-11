#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000;
const int MAXAI = 1'000'000'000;
int n, m, a[MAXN + 5], b[MAXN + 5];
int ansLen, outLen, t[MAXN + 5];
int main(int argc, char *argv[])
{
    registerTestlibCmd(argc, argv);

    n = inf.readInt(1, MAXN);
    m = inf.readInt(1, MAXN);
    for (int i = 1; i <= n; i++)
        a[i] = inf.readInt(1, MAXAI);
    for (int i = 1; i <= m; i++)
        b[i] = inf.readInt(1, MAXAI);

    ansLen = ans.readInt(1, n);

    outLen = ouf.readInt(1, n);
    for (int i = 1; i <= outLen; i++)
        t[i] = ouf.readInt(1, MAXAI);

    if (ansLen != outLen)
        quitf(_wa, "wrong len");
    int pa = 1, pb = 1, pt = 1;
    while (pa <= n && pt <= outLen)
    {
        if (a[pa] == t[pt])
        {
            pa++;
            pt++;
        }
        else
        {
            pa++;
        }
    }
    if (pt <= outLen)
        quitf(_wa, "wrong plan");

    pt = 1;
    while (pb <= n && pt <= outLen)
    {
        if (b[pb] == t[pt])
        {
            pb++;
            pt++;
        }
        else
        {
            pb++;
        }
    }
    if (pt <= outLen)
        quitf(_wa, "wrong plan");
    quitf(_ok, "ok!");
}