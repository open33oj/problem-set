#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    cin >> s;
    int cntX = 0;
    int pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            cntX++;
            pos = i;
        }
    }
    // 多个位置要断开
    if (cntX > 1)
    {
        cout << "-1";
        return 0;
    }
    // 断开的地方不能翻到后面去
    if (cntX == 1 && s[pos] == s[s.size() - 1])
    {
        cout << "-1";
        return 0;
    }
    cout << pos;
    return 0;
}