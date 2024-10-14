#include <bits/stdc++.h>
using namespace std;
int n, m;
bool a[30 * 30 * 30 * 30 + 5];
string s;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        int now = 0;
        for (int i = 0; i < s.size(); i++)
            now = now * 27 + (s[i] - 'a' + 1);
        a[now] = true;
    }
    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        cin >> s;
        int now = 0;
        for (int i = 0; i < s.size(); i++)
            now = now * 27 + (s[i] - 'a' + 1);
        if (!a[now])
            ans++;
    }
    cout << ans << "\n";
    return 0;
}
