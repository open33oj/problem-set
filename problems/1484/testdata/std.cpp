#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x, y;
    cin >> n >> x >> y;
    if (x < y)
        n += (y - x) * (n / x);
    cout << n << "\n";
    return 0;
}