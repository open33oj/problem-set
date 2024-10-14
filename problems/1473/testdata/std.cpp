#include <bits/stdc++.h>
using namespace std;
int T, s, n, sum;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> T;
    while (T--)
    {
        cin >> s >> n;
        int base = s * 7 / 10;
        for (int i = 1; i <= n; i++)
            s = s * 95 / 100;
        sum += max(s, base);
    }
    cout << sum << "\n";
    return 0;
}