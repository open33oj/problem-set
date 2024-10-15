#include <bits/stdc++.h>
using namespace std;
unsigned long long seed;
unsigned long long rnd()
{
    seed = seed * seed + seed + 30ull;
    return seed;
}
int n, m;
unsigned long long a[100000 + 5];
bool vis[100000 + 5];
int main()
{
    cin >> seed >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    sort(a + 1, a + m + 1);
    for (int i = 1; i <= n; i++)
    {
        unsigned long long now = rnd();
        int pos = lower_bound(a + 1, a + m + 1, now) - a;
        if (pos == m + 1)
            continue;
        if (a[pos] == now)
            vis[pos] = true;
    }
    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        if (vis[i])
            ans++;
        if (i != m && a[i] == a[i + 1])
            vis[i + 1] = vis[i];
    }
    cout << ans;
    return 0;
}
