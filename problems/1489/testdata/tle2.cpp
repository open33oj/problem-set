#include <bits/stdc++.h>
using namespace std;
long long n;
long long ans;
int main()
{
    cin >> n;
    ans = 0;
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= i; j++)
        {
            long long now = i / 10 * j;
            ans += now;
        }
    }
    cout << ans << "\n";
    return 0;
}