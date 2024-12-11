#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100000;
int n;
int a[MAXN + 5];
int b[MAXN + 5];
int rnk[MAXN + 5]; // rnk[i] 表示 i 在 a 的排名
int ans;
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
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    // 真的修改 b[i]
    for (int i = 1; i <= n; i++)
        rnk[a[i]] = i;
    for (int i = 1; i <= n; i++)
        b[i] = rnk[b[i]];

    // LIS
    for (int i = 1; i <= n; i++)
        g[i] = n + 1;
    for (int i = 1; i <= n; i++)
    {
        int len = lower_bound(g + 1, g + n + 1, b[i]) - g;
        f[i] = len;
        g[len] = b[i];
        ans = max(ans, f[i]);
    }
    cout << ans << "\n";
    return 0;
}