#include <bits/stdc++.h>
using namespace std;
int n, m, a, d, dd;
int main()
{
    cin >> n >> m >> a >> d >> dd;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int nowA = a + (i - 1) * d;
        int nowD = d + (i - 1) * dd;
        for (int j = 1; j <= m; j++)
        {
            int now = nowA + (j - 1) * nowD;
            ans += now;
            //cout << now << " ";
        }
        //cout << "\n";
    }
    cout << ans;
    return 0;
}