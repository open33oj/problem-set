#include "testlib.h"
#include <bits/stdc++.h>
int main(int argc, char *argv[])
{
    registerTestlibCmd(argc, argv);
    long long n = inf.readLong();
    long long L = inf.readLong();
    long long R = inf.readLong();
    long long ok = ans.readLong();
    long long x = ouf.readLong(-1, n - 1);
    if (ok == -1 && x == -1)
        quitf(_ok, "AC1!");
    long long y = ouf.readLong(n - x, n - x);
    long long ten16 = 10'000'000'000'000'000LL;
    if (ten16 / x + 1 < y)
        quitf(_wa, "Too Big");
    if (L <= x * y && x * y <= R)
        quitf(_ok, "AC2!");
    else
        quitf(_wa, "WA!");
}