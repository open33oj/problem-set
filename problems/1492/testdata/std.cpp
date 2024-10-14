#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, m, x;
    cin >> h >> m >> x;
    int ans = h * 60 + m - x;
    cout << ans / 60 << " " << ans % 60 << "\n";
    return 0;
}