#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5000;
int n;
int a[MAXN + 5];
// f[i]: 以 a[i] 结尾的 LIS 长度
int f[MAXN + 5];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        f[i] = 1;
        for (int j = 1; j <= i - 1; j++)
            if (a[j] < a[i])
                f[i] = max(f[i], f[j] + 1);
        ans = max(ans, f[i]);
    }
    cout << ans;

    return 0;
}