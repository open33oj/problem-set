#include <bits/stdc++.h>
using namespace std;
int seed, P; // 通过输入得到
int f(int id)
{
    return 1LL * id * id % P * seed % P;
}
int n;
int a[5123456];
int cmp(int a, int b)
{
    return a > b;
}
int main()
{
    cin >> n >> seed >> P;
    for (int i = 1; i <= n; i++)
        a[i] = f(i);
    sort(a + 1, a + n + 1, cmp);
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans = ans ^ (a[i] + i);
    cout << ans;
    return 0;
}