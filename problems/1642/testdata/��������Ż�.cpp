// 题面代码优化
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MOD = 1'000'000'000 + 7;
int f(int n, int k)
{
    if (n == 1)
        return 1;
    for (int x = 2; x <= n; x++) // x>1
        if (n % x == 0)          // x 是 n 的因子
            return f(n / x, k) * x % MOD * k % MOD;
}
signed main()
{
    freopen("yu.in", "r", stdin);
    freopen("yu.out", "w", stdout);
    int m, k;
    cin >> m >> k;
    int ans = 0;
    for (int i = 1; i <= m; i++)
        ans = ans ^ f(i, k);
    cout << ans;
    return 0;
}