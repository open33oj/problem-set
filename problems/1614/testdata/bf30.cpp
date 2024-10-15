#include <bits/stdc++.h>
using namespace std;
const int MOD = 1'000'000'000 + 7;
int n, m;
string seq[100005];
map<string, vector<string>> e;
int cal(string &s)
{
    int a = s[0];
    int b = s[1];
    int c = s[2];
    int d = s[3];
    return a + b + c + d;
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
        if (e.find(seq[i]) == e.end())
        {
            ans += cal(seq[i]);
            ans %= MOD;
        }
        else
        {
            for (auto x : e[seq[i]])
            {
                ans += cal(x);
                ans %= MOD;
            }
        }
    }
    cout << ans;
    return 0;
}