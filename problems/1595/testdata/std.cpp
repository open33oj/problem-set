#include <bits/stdc++.h>
using namespace std;
int x, n, m;
int a[105];
int main()
{
    cin >> x >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    int now = x; // 当前气血
    int cnt = 0; // 用葫芦的次数
    for (int i = 1; i <= m; i++)
    {
        while (now - a[i] <= 0)
        {
            if (cnt < n)
            {
                if (cnt == 0)
                    now = x;
                else
                    now = min(x, now + x / 3);
                cnt++;
            }
            else
            {
                cout << i;
                return 0;
            }
        }
        now -= a[i];
    }
    cout << -1;
    return 0;
}