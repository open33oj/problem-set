#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;       // 总次数
int x;       // 免费时长
int y, a, b; // 第一个 y 分钟 a 元。后面每 y 分钟 b 元
int t[10000 + 5], ans;
signed main()
{
    cin >> n;
    cin >> x;
    cin >> y >> a >> b;
    for (int i = 1; i <= n; i++)
        cin >> t[i];

    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (t[i] <= x)
            continue;
        if (t[i] <= y)
        {
            ans += a;
            continue;
        }
        int cnt = (t[i] + (y - 1)) / y;
        ans += a + (cnt - 1) * b;
    }
    cout << ans;
    return 0;
}