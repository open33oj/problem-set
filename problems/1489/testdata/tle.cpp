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
            long long now = 0;
            for (long long k = 1; k <= i; k++)
                if (k % 10 == 0)
                    now += j;
            ans += now;
        }
    }
    cout << ans << "\n";
    return 0;
}