#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;

    bool flag1, flag2;

    if (a > y && z - (a - y) <= 0)
        flag1 = true;
    else
        flag1 = false;

    if (x > b && c - (x - b) <= 0)
        flag2 = true;
    else
        flag2 = false;

    if (flag1 && flag2)
        cout << -1;
    else if (flag1)
        cout << 1;
    else if (flag2)
        cout << 2;
    else
        cout << 0;
    return 0;
}