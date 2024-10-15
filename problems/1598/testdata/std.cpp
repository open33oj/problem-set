#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MOD = 1'000'000'000 + 7;
const int MAXN = 1'000'000;
int n, a, b;
int f[MAXN + 5]; // 走到 i，且 i-1 走过了
int g[MAXN + 5]; // 走到 i，且 i-1 没走过
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> a >> b;
    if (a > b)
        swap(a, b);
    f[a] = 0, f[a + 1] = a + 1;
    g[a] = 1, g[a + 1] = 0;
    for (int i = a + 2; i <= n; i++)
    {
        // 左边走过
        f[i] = (f[i - 1] + g[i - 1]) % MOD; // 直接左边往右走一步
        f[i] = (f[i] + g[i - 1]) % MOD;     // 左边回撤一步再往前
        // 左边没走过
        g[i] = (f[i - 2] + g[i - 2]) % MOD; // 只能从 i-2 一次两步过去
    }
    int ans1 = (f[b] + g[b]) % MOD; // 左边直达
    int ans2 = 0;
    if (b != n)
        ans2 = (g[b + 1] * (n - (b + 1) + 1)) % MOD;
    cout << (ans1 + ans2) % MOD;
    return 0;
}