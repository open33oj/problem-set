#include <bits/stdc++.h>
using namespace std;
signed main()
{
    long long x, y, l, s, r, e;
    cin >> x >> y >> l >> s >> r >> e;
    long long weekPri = 5 * (2 * x + 11 * y); // 完整一周的价格
    long long ans = 0;
    long long len = r - l + 1; // 总天数
    if (len >= 100)
    {
        long long partA = 14; // 留 14 天容错
        long long partB = len - partA;
        ans += partB / 7 * weekPri; // partB中的完整周快速计算总价格
        partA += partB % 7;         // partA为中间剩余的天数
        r = l + partA - 1;          // 更新新的右端点天数
    }
    long long day = l;
    long long hour = s;
    while (day < r || hour < e)
    {
        // 计算当前小时的收费
        if (day % 7 != 6 && day % 7 != 0) // 非周末
        {
            if (17 <= hour && hour < 19)
            {
                ans += x;
                //cout << day << " " << hour << " +" << x << " = " << ans << "\n";
            }
            else if (8 <= hour && hour < 21)
            {
                ans += y;
                //cout << day << " " << hour << " +" << y << " = " << ans << "\n";
            }
        }
        hour++;
        if (hour == 24)
        {
            day++;
            hour = 1;
        }
    }
    cout << ans;
    return 0;
}