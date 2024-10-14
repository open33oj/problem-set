#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[1005];
int b[1005];
int cnt[105];
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
        cnt[a[i]]++;
    for (int i = 1; i <= m; i++)
        cnt[a[b[i]]]--;
    int ans = 0;
    for (int i = 1; i <= 100; i++)
        if (cnt[i] >= 2)
            ans += cnt[i] * (cnt[i] - 1) / 2;
    cout << ans << "\n";
    return 0;
}