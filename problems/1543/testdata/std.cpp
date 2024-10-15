#include <bits/stdc++.h>
using namespace std;
bool check(int x)
{
    int cnt = 0;
    while (x > 0)
    {
        cnt++;
        x /= 10;
    }
    return cnt % 2 == 0;
}
int main()
{
    int l, r;
    cin >> l >> r;
    int ans = 0;
    for (int i = l; i <= r; i++)
        ans += check(i);
    cout << ans;
    return 0;
}