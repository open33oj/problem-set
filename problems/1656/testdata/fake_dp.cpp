#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[105], b[105];
int f[5005];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i] >> b[i];
        b[i] = a[i] - b[i]; // 转换成 a[i] 门槛消耗 b[i] 的尘
    }
    for (int i = 1; i <= m; i++)
        for (int j = i + 1; j <= m; j++)
            if (b[j] > b[i])
            {
                swap(a[j], a[i]);
                swap(b[j], b[i]);
            }
    for (int i = 0; i <= n; i++)
        f[i] = i;
    for (int i = 1; i <= m; i++)
        for (int j = a[i]; j <= n; j++)
            f[j] = min(f[j], f[j - b[i]]);
    cout << f[n] << "\n";
    return 0;
}