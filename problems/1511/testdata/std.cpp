#include <bits/stdc++.h>
using namespace std;
int n;
int a[1005];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int minAi = a[1];
    for (int i = 1; i <= n; i++)
        minAi = min(minAi, a[i]);
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans += a[i] - minAi;
    cout << ans;
    return 0;
}