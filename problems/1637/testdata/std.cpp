#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[5005];
int b[5005];
int f[2505][5005];
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    int nn = n / 2;
    for (int i = 0; i <= nn; i++)
        for (int j = 0; j <= k; j++)
            f[i][j] = -1;
    f[0][0] = 0;
    for (int i = 1; i <= nn; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            f[i][j] = f[i - 1][j];
            if (j >= 1 && f[i - 1][j - 1] != -1)
            {
                int nxt = f[i - 1][j - 1] + max(a[i], a[i + nn]);
                if (f[i][j] == -1 || f[i][j] < nxt)
                    f[i][j] = nxt;
            }
            if (j >= 2 && f[i - 1][j - 2] != -1)
            {
                int nxt = f[i - 1][j - 2] + b[i] + b[i + nn];
                if (f[i][j] == -1 || f[i][j] < nxt)
                    f[i][j] = nxt;
            }
        }
    }
    cout << f[nn][k];
    return 0;
}