#include <bits/stdc++.h>
using namespace std;
int f(int l, int r, int x)
{
    int cnt = 0;
    while (l <= r)
    {
        cnt++;
        int mid = (l + r) / 2;
        if (mid == x)
            return cnt;
        if (mid < x)
            l = mid + 1;
        if (mid > x)
            r = mid - 1;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int l, r;
    cin >> l >> r;
    int maxX = 0;
    for (int i = l; i <= r; i++)
        maxX = max(maxX, f(l, r, i));
    int ans = 0;
    for (int i = l; i <= r; i++)
        if (f(l, r, i) == maxX)
            ans++;
    cout << ans;
    return 0;
}