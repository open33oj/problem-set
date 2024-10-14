#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;
    long long ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        ans += max(a, b);
    }
    cout << ans << "\n";
    return 0;
}