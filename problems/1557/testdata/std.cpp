#include <bits/stdc++.h>
using namespace std;
int n, m;
int x, ans;
int main()
{
    cin >> n >> m;
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        ans += x / m;
        if (x % m != 0)
            ans++;
    }
    cout << ans * m;
    return 0;
}