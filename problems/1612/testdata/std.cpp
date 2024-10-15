#include <bits/stdc++.h>
using namespace std;
int f[] = {1, 3, 7, 61};
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        if (1 <= n && n < 3)
            cout << 0 << "\n";
        else if (3 <= n && n < 7)
            cout << 1 << "\n";
        else if (7 <= n && n < 61)
            cout << 2 << "\n";
        else if (61 <= n)
            cout << 3 << "\n";
    }
    return 0;
}