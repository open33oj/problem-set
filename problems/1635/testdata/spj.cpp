#include "testlib.h"
#include <bits/stdc++.h>
int a[2000000 + 5];
int main(int argc, char *argv[])
{
    setName("compares two signed integers");
    registerTestlibCmd(argc, argv);
    int n = inf.readInt();
    int k = inf.readInt();
    int len = ans.readInt();
    for (int i = 1; i <= k; i++)
        a[i] = ouf.readInt(1, n);
    std::sort(a + 1, a + k + 1);
    int pos = 1; // 第一个没被覆盖到的位置
    for (int i = 1; i <= k; i++)
    {
        if (a[i] > pos + len)
            quitf(_wa, ">len");
        // 下一个 len 覆盖不到的位置
        pos = std::min(n + 1, a[i] + len + 1);
    }
    if (pos != n + 1)
        quitf(_wa, "not n");
    else
        quitf(_ok, "ok");
}