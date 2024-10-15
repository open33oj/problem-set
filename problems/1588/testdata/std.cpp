#include <bits/stdc++.h>
using namespace std;
int x, y, z, a;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> x >> y >> z >> a;
    // x + y / 2 + z / 4 >= a
    // 4x + 2y + z >= 4a
    if (4 * x + 2 * y + z >= 4 * a)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}