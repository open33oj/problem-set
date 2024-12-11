// 10 分
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MOD = 1'000'000'000 + 7;
signed main()
{
    freopen("yu.in", "r", stdin);
    freopen("yu.out", "w", stdout);
    int m, k;
    cin >> m >> k;
    int ans = 0;
    for (int i = 1; i <= m; i++)
        ans = ans ^ i;
    cout << ans;
    return 0;
}