#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MOD = 1'000'000'000 + 7;
const int MAXN = 1'000'000;
int n, a, b;
int f[MAXN + 5];
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> a >> b;
    f[0] = 1;
    f[1] = 1;
    f[2] = 2;
    for (int i = 3; i <= n; i++)
        f[i] = (f[i - 1] + f[i - 2] + f[i - 3]) % MOD;
    cout << f[n];
    return 0;
}