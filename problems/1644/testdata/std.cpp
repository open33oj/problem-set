#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, k;
pair<int, int> a[100000 + 5]; // ai,i
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i].first;
    for (int i = 1; i <= n; i++)
    {
        a[i].second = i;
        if (a[i].first <= 0)
            continue;
        a[i].first %= k;
        if (a[i].first)
            a[i].first -= k;
    }
    sort(a + 1, a + n + 1);
    int cnt = 1;
    for (int i = 2; i <= n; i++)
        if (a[i].first != a[i - 1].first)
            cnt++;
    cout << a[n].second << " " << cnt;
    return 0;
}