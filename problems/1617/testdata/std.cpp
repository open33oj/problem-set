#include <bits/stdc++.h>
#define int long long
using namespace std;
char t;
int i, n, j, m;
signed main()
{
    cin >> t >> i >> t >> t >> n >> t; // (ix+n)
    cin >> t >> j >> t >> t >> m >> t; // (jx+m)
    int a = i * j;
    int b = i * m + j * n;
    int c = n * m;
    if (a != 0)
    {
        if (a != 1)
            cout << a;
        cout << "x^2";
    }
    if (b != 0)
    {
        if (a != 0)
            cout << "+";
        if (b != 1)
            cout << b;
        cout << "x";
    }
    if (c != 0)
    {
        if (a != 0 || b != 0)
            cout << "+";
        cout << c;
    }
    cout << "\n";
    bool flag = false;
    int ans;
    if (a == 0 && b == 0)
    {
        if (c == 0)
            flag = true, ans = 33;
    }
    else if (a == 0)
    {
        if (c % b == 0)
            flag = true, ans = -c / b;
    }
    else
    {
        // (ix+n)(jx+m)
        if (n % i == 0)
            flag = true, ans = -n / i;
        if (m % j == 0)
            flag = true, ans = -m / j;
    }
    if (flag)
        cout << ans << "\n";
    else
        cout << "No\n";
    return 0;
}