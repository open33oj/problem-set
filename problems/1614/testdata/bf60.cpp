#include <bits/stdc++.h>
using namespace std;
const int MOD = 1'000'000'000 + 7;
int n, m;
string seq[100005];
map<string, vector<string>> e;
int cal(string &s)
{
    // 没有额外含义
    if (e.find(s) == e.end())
    {
        int res = 0;
        for (char x : s)
            res += (int)x;
        return res;
    }
    // 算出来每个含义的值，求和
    int res = 0;
    for (string &x : e[s])
    {
        res += cal(x);
        res %= MOD;
    }
    return res;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> seq[i];
    for (int i = 1; i <= m; i++)
    {
        string s, t;
        int num;
        cin >> s;
        cin >> num;
        while (num--)
        {
            cin >> t;
            e[s].push_back(t);
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += cal(seq[i]);
        ans %= MOD;
    }
    cout << ans;
    return 0;
}