#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MAXN = 1000000;
int n;
int a[MAXN + 5];
int sum[MAXN + 5];
signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        sum[i] = sum[i - 1] + a[i];
    int ans = sum[2];
    int minSum = 0;
    for (int i = 3; i <= n; i++)
    {
        minSum = min(minSum, sum[i - 2]);
        ans = max(ans, sum[i] - minSum);
    }
    cout << ans;
    return 0;
}