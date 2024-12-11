#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // 8x + 6y = a
    // 16x + 8y = b

    // 4y = 2a-b

    int a, b;
    cin >> a >> b;

    int x, y;
    y = (2 * a - b) / 4;
    x = (a - 6 * y) / 8;

    cout << x << " " << y << "\n";
    
    return 0;
}