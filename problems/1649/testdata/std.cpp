#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100000;
int n, ans;
int a[MAXN + 5];
int l[MAXN + 5], r[MAXN + 5];
int rnk[MAXN + 5]; // i 号点排名 rnk[i]
// 到了 u 这个点，父节点方向小于它的有 cnt 个
// 返回子树大小
int dfs(int u, int cnt)
{
    int siz = 0;
    if (l[u] != 0)
    {
        siz += dfs(l[u], cnt);
        cnt += siz;
    }
    siz += 1;
    rnk[u] = cnt + 1;
    if (r[u] != 0)
        siz += dfs(r[u], cnt + 1);
    return siz;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    int root = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        root = root ^ i;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> l[i] >> r[i];
        root = root ^ l[i];
        root = root ^ r[i];
    }
    dfs(root, 0);
    ans = 0;
    for (int i = 1; i <= n; i++)
        if (n - rnk[i] + 1 <= n / 2)
        {
            ans += a[i];
        }
    cout << ans;
    return 0;
}