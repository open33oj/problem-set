#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("fan.in", "r", stdin);
    freopen("fan.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i] >> b[i];
    }
    vector<int> dp(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i >= a[j])
            {
                dp[i] = max(dp[i], dp[i - a[j] + b[j]] + a[j] - b[j]);
            }
        }
    }
    cout << n - dp[n];
    return 0;
}