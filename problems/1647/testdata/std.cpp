#include <bits/stdc++.h>
using namespace std;
int n, a, b, c;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    a = n % 10;
    b = n / 10 % 10;
    c = n / 100 % 10;
    int ans = 0;
    for (int x = 0; x <= 9; x++)
        for (int y = 0; y <= 9; y++)
            for (int z = 0; z <= 9; z++)
                if (x - y == a - b && b - c == y - z && z != 0)
                    ans++;
    cout << ans;
    return 0;
}