#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
pair<int, int> a[500 + 5];
// xx[i] 存 x 为 i 的所有 y
// yy[i] 存 y 为 i 的所有 x
map<int, vector<int>> xx, yy;
int main(int argc, char *argv[])
{
    registerTestlibCmd(argc, argv);
    int n = inf.readInt();
    int m = inf.readInt();
    for (int i = 1; i <= n; i++)
    {
        a[i].first = inf.readInt();
        a[i].second = inf.readInt();
    }
    int k = ouf.readInt(1, 4 * n);
    for (int i = 1; i <= k; i++)
    {
        int x, y;
        x = ouf.readInt(1, m);
        y = ouf.readInt(1, m);
        xx[x].push_back(y);
        yy[y].push_back(x);
    }
    // 排序及检查重复位置
    for (auto &x : xx)
    {
        sort(x.second.begin(), x.second.end());
        for (int i = 0; i < x.second.size(); i++)
            if (x.second[i] == x.second[i + 1])
                quitf(_wa, "same pos");
    }
    for (auto &y : yy)
    {
        sort(y.second.begin(), y.second.end());
        for (int i = 0; i < y.second.size(); i++)
            if (y.second[i] == y.second[i + 1])
                quitf(_wa, "same pos");
    }
    for (int i = 1; i <= n; i++)
    {
        int x = a[i].first;
        int y = a[i].second;
        // 检查小猫位置有没有稻草人
        if (binary_search(xx[x].begin(), xx[x].end(), y))
            quitf(_wa, "cat pos");
        // 1 ~ x-1
        if (lower_bound(yy[y].begin(), yy[y].end(), x) == yy[y].begin())
            quitf(_wa, "1 ~ x-1");
        // x+1 ~ m
        if (upper_bound(yy[y].begin(), yy[y].end(), x) == yy[y].end())
            quitf(_wa, "x+1 ~ m");
        // 1 ~ y-1
        if (lower_bound(xx[x].begin(), xx[x].end(), y) == xx[x].begin())
            quitf(_wa, "1 ~ y-1");
        // y+1 ~ m
        if (upper_bound(xx[x].begin(), xx[x].end(), y) == xx[x].end())
            quitf(_wa, "y+1 ~ m");
    }
    quitf(_ok, "good!");
}