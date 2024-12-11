#include <bits/stdc++.h>
using namespace std;
int n, m, k;
int x, y, d;
int main()
{
    cin >> n >> m >> k;
    cin >> x >> y >> d;
    for (int i = 1; i <= k; i++)
    {
        int xx = x, yy = y;
        if (d == 0)
            yy++;
        if (d == 1)
            xx++;
        if (d == 2)
            yy--;
        if (d == 3)
            xx--;
        if (1 <= xx && xx <= n && 1 <= yy && yy <= m)
            x = xx, y = yy;
        else
            d = (d + 1) % 4;
    }
    cout << x << " " << y << "\n";
    return 0;
}