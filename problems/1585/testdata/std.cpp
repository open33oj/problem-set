#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long x;
    cin >> x;
    long long ans = 0;
    for (long long i = 1; i * i <= x; i++)
        if (x % (i * i) == 0)
            ans = i;
    cout << ans;
    return 0;
}