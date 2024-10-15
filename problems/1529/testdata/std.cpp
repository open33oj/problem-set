#include <bits/stdc++.h>
using namespace std;
int n, ai;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    long long ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> ai;
        int num = ai / i;
        ans += ai - (num * i);
    }
    cout << ans;
    return 0;
}