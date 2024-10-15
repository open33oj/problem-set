#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long p, q, x, l, r;
    cin >> p >> q;
    x = p / q;
    r = x + 1;
    l = x - 1;
    if (abs(l * q - p) <= abs(x * q - p))
        x = l;
    if (abs(r * q - p) < abs(x * q - p))
        x = r;
    cout << x;
    return 0;
}