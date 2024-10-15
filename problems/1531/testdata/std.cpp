#include <bits/stdc++.h>
using namespace std;
int n, m, k, num;
int a[5005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m >> k >> num;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        // 当前需要这么多
        int now = m - a[i];
        // 要加这么多次
        int cnt = now / num + (now % num > 0);
        ans += cnt;
        int sum = cnt * num; // 一共这么多，可以分配给 k 个
        for (int j = i; j <= i + k - 1 && j <= n; j++)
        {
            if (sum > m - a[j])
            {
                sum -= (m - a[j]);
                a[j] = m;
            }
            else
            {
                a[j] += sum;
                sum = 0;
                break;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}