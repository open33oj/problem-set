#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 200'000;
const int MAXAI = 1'000'000'000;
int n, a[MAXN + 5];
int ansLen, outLen, b[MAXN + 5];
int main(int argc, char *argv[])
{
    registerTestlibCmd(argc, argv);

    n = inf.readInt(1, MAXN);
    for (int i = 1; i <= n; i++)
        a[i] = inf.readInt(1, MAXAI);

    ansLen = ans.readInt(1, n);
    
    outLen = ouf.readInt(1, n);
    for (int i = 1; i <= outLen; i++)
        b[i] = ouf.readInt(1, MAXAI);
        
    if (ansLen != outLen)
        quitf(_wa, "wrong len");
    int pa = 1, pb = 1;
    while (pa <= n && pb <= outLen)
    {
        if (a[pa] == b[pb])
        {
            pa++;
            pb++;
        }
        else
        {
            pa++;
        }
    }
    if (pb <= outLen)
        quitf(_wa, "wrong plan");
    else
        quitf(_ok, "ok!");
}