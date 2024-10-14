#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z, q;
    cin >> x >> y >> z >> q;
    assert(0 <= x && x <= 10);
    assert(y == 0);
    assert(0 <= z && z <= 10);
    assert(1 <= q && q <= 100);
    int t = x + y + z + y;
    q = (q - 1) % t + 1;
    if (q <= x)
        cout << "red";
    else
        cout << "green";
    return 0;
}