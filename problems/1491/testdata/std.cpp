#include <bits/stdc++.h>
using namespace std;
int n;
int a[112345];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int ans = 0;
    int maxAi = a[1];
    for (int i = 2; i <= n; i++)
    {
        if (a[i] < maxAi)
            ans = max(ans, a[i] + maxAi);
        else
            maxAi = a[i];
    }
    cout << ans << "\n";
    return 0;
}