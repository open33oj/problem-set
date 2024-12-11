#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, k;
int a[1005];
int b[1005];
signed main()
{
    cin >> n >> m >> k;
    for (int i = 1; i <= k; i++)
        cin >> a[i];
    for (int i = 1; i <= k; i++)
        cin >> b[i];
    for (int i = 1; i <= k; i++)
        for (int j = i + 1; j <= k; j++)
            if (a[j] > a[i])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
    for (int i = 1; i <= k; i++)
    {
        // cout << a[i] << " " << b[i] << "\n";
        if (a[i] == 1 || m == 0 || n == 0)
            break;
        // 尽可能消耗 n, num 为能消耗多少 n
        int num = min(b[i], (m + (a[i] - 1)) / a[i]);
        n = max(0LL, n - num);
        m = max(0LL, m - num * a[i]);
    }
    if (n > m)
        cout << n - m;
    else
        cout << "No";
    return 0;
}