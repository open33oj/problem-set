#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int ans = 0;
    for (int i = 0; i <= n; i++)
        if (i % a == 0 && i % b == 0)
            ans++;
    cout << ans;
    return 0;
}