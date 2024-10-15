#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, L, R;
signed main()
{
    cin >> n >> L >> R;
    for (int i = 1; i <= n / 2; i++)
    {
        int j = n - i;
        if (i * j > R)
            break;
        if (L <= i * j && i * j <= R)
        {
            cout << i << " " << j << "\n";
            return 0;
        }
    }
    cout << "-1\n";
    return 0;
}