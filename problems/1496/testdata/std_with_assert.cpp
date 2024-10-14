#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z, q;
    cin >> x >> y >> z >> q;
    assert(0 <= x && x <= 10);
    assert(0 <= y && y <= 10);
    assert(0 <= z && z <= 10);
    assert(1 <= x + y + z);
    assert(1 <= q && q <= 100);
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