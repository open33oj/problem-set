#include <bits/stdc++.h>
using namespace std;
int n, ans;
long long a[5005];
long long b[5005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == b[i])
            continue;
        ans++;
        long long x = a[i];
        long long y = b[i];
        for (int j = 1; j <= n; j++)
        {
            if (a[j] == x)
                a[j] = y;
            if (b[j] == x)
                b[j] = y;
        }
    }
    cout << ans;
    return 0;
}