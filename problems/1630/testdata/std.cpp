#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[1000 + 5][88 + 5];
bool b[88 + 5][88 + 5];
int cnt, ans[4 + 5];
void dfs(int now, int st)
{
    if (now == 5)
    {
        for (int i = 1; i <= 4; i++)
            for (int j = i + 1; j <= 4; j++)
                if (b[ans[i]][ans[j]])
                    return;
        // for (int i = 1; i <= 4; i++)
        //     cout << ans[i] << " ";
        // cout << "\n";
        cnt++;
        return;
    }
    for (int i = st; i <= n; i++)
    {
        ans[now] = i;
        dfs(now + 1, i + 1);
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
        for (int j = 1; j <= n; j++)
            for (int k = j + 1; k <= n; k++)
                if (a[i][j] && a[i][k])
                    b[j][k] = b[k][j] = 1;
    }
    cnt = 0;
    dfs(1, 1);
    cout << cnt;
    return 0;
}