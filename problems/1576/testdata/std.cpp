#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a1, d, l, r;
signed main()
{
    cin >> n >> a1 >> d >> l >> r;

    // 调整数列，为连续上升
    if (d < 0)
    {
        a1 = a1 + (n - 1) * d;
        d = -d;
    }

    int ans = 0;

    // lllll
    if (a1 < l)
    {
        // 前 cnt 项都 <= l，第 cnt+1 项肯定大于 l
        int cnt = (l - a1) / d + 1;
        if (cnt > n)
            cnt = n;
        ans += cnt * l; // cnt 个 l
        a1 += cnt * d;  // 首项变到第 cnt+1 项
        n -= cnt;       // 现在少了 cnt 项
    }
    // 等差阶段
    if (a1 < r)
    {
        // 前 cnt 项都 <= r，第 cnt+1 项肯定大于 r
        int cnt = (r - a1) / d + 1;
        if (cnt > n)
            cnt = n;
        // 首项 加 末项 乘以 项数 除以 2
        ans += (a1 + (a1 + (cnt - 1) * d)) * cnt / 2;
        a1 += cnt * d;
        n -= cnt;
    }

    // rrrrrr 后面的全都大于 r
    ans += n * r;

    cout << ans;
    return 0;
}