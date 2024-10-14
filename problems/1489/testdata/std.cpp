#include <bits/stdc++.h>
using namespace std;
long long n;
long long ans;
int main()
{
    cin >> n;
    ans = 0;
    for (long long i = 1; i <= n; i++)
        ans += i / 10 * ((1 + i) * i / 2);
    cout << ans << "\n";
    return 0;
}