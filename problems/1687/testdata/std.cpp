#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000;
int n, m;
int a[1005], b[1005];
// f[i][j] 记录 a 前 i 个元素与 b 前 j 个元素的 LCS 长度
int f[1005][1005];
// f[i][j] 的前一个状态
pair<int, int> pre[1005][1005];
// 方案，实际上也可以递归输出
vector<int> plan;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i] == b[j])
            {
                f[i][j] = f[i - 1][j - 1] + 1;
                pre[i][j] = make_pair(i - 1, j - 1);
            }
            else
            {
                if (f[i - 1][j] > f[i][j - 1])
                {
                    f[i][j] = f[i - 1][j];
                    pre[i][j] = make_pair(i - 1, j);
                }
                else
                {
                    f[i][j] = f[i][j - 1];
                    pre[i][j] = make_pair(i, j - 1);
                }
            }
    cout << f[n][m] << "\n";
    while (n >= 1 && m >= 1)
    {
        if (a[n] == b[m])
            plan.push_back(a[n]);
        pair<int, int> preNM = pre[n][m];
        n = preNM.first;
        m = preNM.second;
    }
    for (int i = (int)plan.size() - 1; i >= 0; i--)
        cout << plan[i] << " ";
    cout << "\n";
    return 0;
}