#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (int j = 2; j <= i - 1; j++)
        {
            if (i % j == 0)
                cnt++;
            if (cnt > 2)
                break;
        }
        if (cnt == 2)
            ans++;
    }
    cout << ans;
    return 0;
}