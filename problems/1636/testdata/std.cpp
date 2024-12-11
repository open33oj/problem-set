#include <bits/stdc++.h>
using namespace std;
int n, m;
char a[2005][2005];
int up[2005][2005];
int le[2005][2005];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i][j] == 'v')
                up[i][j] = le[i][j] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (up[i][j])
                up[i][j] += up[i - 1][j];
            if (le[i][j])
                le[i][j] += le[i][j - 1];
        }
    long long res = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (up[i][j] && le[i][j])
                res += (up[i][j] - 1) * (le[i][j] - 1);
    cout << res;
    return 0;
}