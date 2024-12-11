#include <bits/stdc++.h>
using namespace std;
int a, b, c, x;
int main()
{
    cin >> a >> b >> c >> x;
    if (x >= a)
        cout << x << " " << b << " " << c << "\n";
    else
        cout << x << " " << c << " " << -1 << "\n";
    return 0;
}