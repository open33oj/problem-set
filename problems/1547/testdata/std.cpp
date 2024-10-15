#include <bits/stdc++.h>
using namespace std;
int n, m, ans;
int a[10];
int x[10];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int up = 1;
    for (int i = 1; i <= n; i++)
        up *= 10;
    ans = 0;
    for (int i = 0; i < up; i++)
    {
        for (int j = 1, ii = i; j <= n; j++)
        {
            x[j] = ii % 10;
            ii /= 10;
        }
        bool flag = true;
        // 和为 m
        int sum = 0;
        for (int j = 1; j <= n; j++)
            sum += x[j];
        if (sum > m)
            flag = false;
        // 油箱限制范围内
        for (int j = 1; j <= n; j++)
            if (x[j] > a[j])
                flag = false;
        // 相邻奇偶性不同
        for (int j = 2; j <= n; j++)
            if (x[j] % 2 == x[j - 1] % 2)
                flag = false;
        if (flag)
            ans++;
           
    }
    cout << ans;
    return 0;
}