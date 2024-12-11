#include <bits/stdc++.h>
using namespace std;
const int N = 1000000;
int n;
int a[N + 5]; // 目标颜色
int b[N + 5]; // 当前颜色
vector<int> e[N + 5];
// 去掉最高位
int fa(int x)
{
    for (int i = 1000000; i >= 10; i /= 10)
        if (x >= i)
            return x % i;
    return x;
}
int main()
{
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cin >> a[i];
        e[fa(i)].push_back(i);
    }
    int ans = 0;
    for (int u = 0; u <= n; u++)
    {
        if (b[u] == 0 || b[u] != a[u])
        {
            ans++;
            b[u] = a[u];
        }
        for (int v : e[u])
            b[v] = a[u];
    }
    cout << ans;
    return 0;
}