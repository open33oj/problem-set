#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000;
int n, m;
int a[1005], b[1005];
// f[i][j] 记录 a 前 i 个元素与 b 前 j 个元素的 LCS 长度
int f[1005][1005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i] == b[j])
                f[i][j] = f[i - 1][j - 1] + 1;
            else
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);

    cout << n+m-f[n][m];
    return 0;
}