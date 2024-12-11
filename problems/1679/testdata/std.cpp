#include <bits/stdc++.h>
using namespace std;
const int MAXN = 200'000;
const int MAXAI = 1'000'000'000;
int n;
int a[MAXN + 5];
// f[i]: 以 b[i] 结尾的 LIS 长度
int f[MAXN + 5];
// g[len]: 当前长度为 len 的 LIS 的最小结尾
int g[MAXN + 5];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int ans = 0;
    for (int i = 1; i <= n; i++)
        g[i] = MAXAI + 1;
    for (int i = 1; i <= n; i++)
    {
        int len = lower_bound(g + 1, g + n + 1, a[i]) - g;
        f[i] = len;
        g[len] = a[i];
        ans = max(ans, f[i]);
    }
    cout << ans;

    return 0;
}
