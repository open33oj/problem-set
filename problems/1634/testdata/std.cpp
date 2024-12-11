#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MAXN = 5000;
int n;
int a[MAXN + 5];
int f[MAXN + 5][MAXN + 5]; // l~r 33DAI 先手的得分
int g[MAXN + 5][MAXN + 5]; // l~r kitten 先手的得分
signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int len = 2; len <= n; len++)
    {
        for (int l = 1; l + len - 1 <= n; l++)
        {
            int r = l + len - 1;
            // 不能走
            if (len == 2)
            {
                f[l][r] = g[l][r] = a[l] - a[r];
                continue;
            }
            // 走一步
            f[l][r] = g[l + 1][r] + a[l];
            g[l][r] = f[l][r - 1] - a[r];
            // 可以走两步
            if (len > 3)
            {
                f[l][r] = max(f[l][r], g[l + 2][r] + a[l]);
                g[l][r] = min(g[l][r], f[l][r - 2] - a[r]);
            }
        }
    }
    cout << f[1][n];
    return 0;
}