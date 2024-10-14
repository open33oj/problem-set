#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z, q;
    cin >> x >> y >> z >> q;
    int t = x + y + z + y;
    q = (q - 1) % t + 1;
    if (q <= x)
        cout << "red";
    else if (q <= x + y)
        cout << "yellow";
    else if (q <= x + y + z)
        cout << "green";
    else
        cout << "yellow";
    return 0;
}