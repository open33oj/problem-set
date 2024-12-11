#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n, cnt;
    cin >> n;
    cnt = 0;
    for (int i = 0; i <= n; i++)
    {
        int l = i;
        int r = n;
        int j = n;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if ((i + mid) * (mid - i + 1) >= 2 * n)
            {
                j = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        if ((i + j) * (j - i + 1) == 2 * n)
            cnt++;
    }
    cout << cnt;
    return 0;
}