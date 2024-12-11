#include <bits/stdc++.h>
using namespace std;
int n, m;
int x[505], y[505];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> x[i] >> y[i];
    sort(x + 1, x + n + 1);
    sort(y + 1, y + n + 1);
    // 计数
    int cnt = 2;
    for (int i = 2; i <= n; i++)
        if (x[i] != x[i - 1])
            cnt += 2;
    cnt += 2;
    for (int i = 2; i <= n; i++)
        if (y[i] != y[i - 1])
            cnt += 2;
    cout << cnt << "\n";
    // 输出
    cout << x[1] << " " << 1 << "\n";
    cout << x[1] << " " << m << "\n";
    for (int i = 2; i <= n; i++)
        if (x[i] != x[i - 1])
        {
            cout << x[i] << " " << 1 << "\n";
            cout << x[i] << " " << m << "\n";
        }
    cout << 1 << " " << y[1] << "\n";
    cout << m << " " << y[1] << "\n";
    for (int i = 2; i <= n; i++)
        if (y[i] != y[i - 1])
        {
            cout << 1 << " " << y[i] << "\n";
            cout << m << " " << y[i] << "\n";
        }
    return 0;
}