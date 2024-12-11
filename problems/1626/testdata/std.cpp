#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m;
int a[1000000 + 5];
bool check(int x)
{
    // 从前往后
    int last = -1;
    for (int i = 1; i <= m; i++)
    {
        int now = a[i];
        // 要回头
        if (now >= last + 2)
        {
            // 能不能接上，last 和 now 中间有 now - last - 1 个数
            if (now - last - 1 > x)
                return false;
            // 可以先左再右，也可以先右再左
            int max1 = now + max(0LL, x - (now - last - 1) * 2);
            int max2 = now + max(0LL, (x - (now - last - 1)) / 2);
            last = max(max1, max2);
        }
        // 继续往前
        else if (now <= last + 2)
            last = max(last, now + x);
    }
    return last >= n;
}
signed main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    sort(a + 1, a + m + 1);
    int l = 0;
    int r = n * 2;
    int ans;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans;
    return 0;
}