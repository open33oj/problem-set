#include <bits/stdc++.h>
using namespace std;
int n, a, b;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> a >> b;
    int ans1 = n * a;
    int ans2 = n % 4 * a + (n / 4) * (n / 4) * b;
    cout << max(ans1, ans2);
    return 0;
}