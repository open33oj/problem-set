#include <bits/stdc++.h>
using namespace std;
int n;
int a[1005];
int rnk[1005];
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    sort(a + 1, a + n + 1, cmp);
    rnk[1] = 1;
    for (int i = 2; i <= n; i++)
        if (a[i] == a[i - 1])
            rnk[i] = rnk[i - 1];
        else
            rnk[i] = i;

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (1 <= rnk[i] && rnk[i] <= 5)
            ans += 800;
        else if (6 <= rnk[i] && rnk[i] <= 15)
            ans += 400;
        else
        {
            ans += min(10, n - i + 1) * 200;
            break;
        }
    }
    cout << ans;
    return 0;
}