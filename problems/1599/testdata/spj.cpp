#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int n;
int a[60 + 5];
string ans_s[60 + 5];
string ouf_s[60 + 5];
string ans_yn, ouf_yn;
int ans_wpl, ouf_wpl;
int main(int argc, char *argv[])
{
    setName("compares two signed integers");
    registerTestlibCmd(argc, argv);
    n = inf.readInt();
    for (int i = 1; i <= n; i++)
        a[i] = inf.readInt();
    ans_yn = ans.readWord();
    ouf_yn = ouf.readWord();
    if (ans_yn != ouf_yn)
    {
        quitf(_wa, "YES NO ERROR");
    }
    if (ans_yn == "Yes")
    {
        ans_wpl = ans.readInt();
        ouf_wpl = ouf.readInt();
        if (ans_wpl != ouf_wpl)
            quitf(_wa, "YES WPL ERROR");
        else
            quitf(_ok, "YES OK");
    }

    for (int i = 1; i <= n; i++)
        ans_s[i] = ans.readWord();
    ans_wpl = 0;
    for (int i = 1; i <= n; i++)
        ans_wpl += ans_s[i].size() * a[i];

    for (int i = 1; i <= n; i++)
        ouf_s[i] = ouf.readWord();
    ouf_wpl = 0;
    for (int i = 1; i <= n; i++)
        ouf_wpl += ouf_s[i].size() * a[i];

    if (ans_wpl != ouf_wpl)
        quitf(_wa, "NO WPL ERROR");
    // 检查前缀问题
    bool flag = true;
    sort(ouf_s + 1, ouf_s + n + 1);
    for (int i = 1; i <= n - 1; i++)
    {
        if (ouf_s[i] > ouf_s[i + 1])
            continue;
        bool now = true; // 是否为前缀
        for (int j = 0; j < ouf_s[i].size(); j++)
            if (ouf_s[i][j] != ouf_s[i + 1][j])
            {
                now = false;
                break;
            }
        if (now)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        quitf(_ok, "NO OK");
    else
        quitf(_wa, "NO ERROR PREFIX");
}