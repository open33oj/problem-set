#include <bits/stdc++.h>
#define int long long
using namespace std;
int a, b, x, y;
int ans;
signed main()
{
    cin >> a >> b >> x >> y;
    while (x != a || y != b)
    {
        if (x > y)
        {
            int nxt = x % y;
            if (nxt < a)
                nxt = a;
            ans += (x - nxt) / y;
            x = nxt;
        }
        else
        {
            int nxt = y % x;
            if (nxt < b)
                nxt = b;
            ans += (y - nxt) / x;
            y = nxt;
        }
    }
    cout << ans;
    return 0;
}