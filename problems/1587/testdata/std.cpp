#include <bits/stdc++.h>
using namespace std;
int n, m, x;
string s;
int turtle_cnt; // 乌龟计数器
int g[10];      // 棋盘
int temp[10];   // 棋盘
// 检查全家福
bool QJF()
{
    for (int i = 1; i <= 9; i++)
    {
        temp[i] = g[i];
        if (g[i] == -1)
            return false;
    }
    sort(temp + 1, temp + 10);
    for (int i = 2; i <= 9; i++)
        if (temp[i] == temp[i - 1])
            return false;
    m += 8;
    for (int i = 1; i <= 9; i++)
        g[i] = -1;
    return true;
}
// 检查三个位置是否相等
bool check3(int i, int j, int k)
{
    if (g[i] != -1 && g[i] == g[j] && g[j] == g[k])
    {
        g[i] = g[j] = g[k] = -1;
        m += 2;
        return true;
    }
    return false;
}
// 行列对角线按顺序检查
bool HLD()
{
    return check3(1, 2, 3) || check3(4, 5, 6) || check3(7, 8, 9) ||
           check3(1, 4, 7) || check3(2, 5, 8) || check3(3, 6, 9) ||
           check3(1, 5, 9) || check3(3, 5, 7);
}
// 碰
bool P()
{
    for (int i = 1; i <= 9; i++)
    {
        if (g[i] == -1)
            continue;
        for (int j = i + 1; j <= 9; j++)
        {
            if (g[j] == g[i])
            {
                g[j] = g[i] = -1;
                m += 1;
                return true;
            }
        }
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m >> x;
    cin >> s;
    for (int i = 1; i <= 9; i++)
        g[i] = -1;
    while (turtle_cnt < m)
    {
        // 拿乌龟
        for (int i = 1; i <= 9; i++)
        {
            if (g[i] == -1 && turtle_cnt < m)
            {
                g[i] = s[turtle_cnt] - '0';
                if (s[turtle_cnt] - '0' == x)
                    m++;
                turtle_cnt++;
            }
        }
        // 结算
        bool flag = true;
        while (flag)
        {
            flag = false;
            if (QJF())
                flag = true;
            else if (HLD())
                flag = true;
            else if (P())
                flag = true;
        }
    }
    cout << turtle_cnt;
    return 0;
}