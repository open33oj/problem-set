#include "testlib.h"
#include <bits/stdc++.h>
int main(int argc, char *argv[])
{
    registerTestlibCmd(argc, argv);
    int n = inf.readInt();
    int m = inf.readInt();
    int nx = ouf.readInt(1, 756);
    int x = nx - n;
    if ((n + x) != std::min(756, m + x / 4))
        quitf(_wa, "%d %d", n + x, m + x / 4);
    quitf(_ok, "AC!");
}