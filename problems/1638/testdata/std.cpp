#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[1005][1005];
int f[1005][1005];
bool check(int x)
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            bool now = a[i][j] >= x;
            f[i][j] = max(f[i - 1][j], f[i][j - 1]) + now;
        }
    return f[n][n] >= k;
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    int l = 1;
    int r = 1'000'000'000;
    int ans;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans;
    return 0;
}