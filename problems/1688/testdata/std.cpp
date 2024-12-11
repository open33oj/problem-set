#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5000;
const int MAXM = 500'000;
int n, m;
string s;
int a[MAXN + 5], b[MAXM + 5];
// f[i][j]: a[1]~a[i] 与 b 构成的长度为 j 的 LCS
// 消耗掉了 b 的前 f[i][j] 个字符
int f[MAXN + 5][MAXN + 5];
// 存 b 中每个字母的所有出现位置
vector<int> pos[30];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    cin >> s;
    for (int i = 1; i <= n; i++)
        a[i] = s[i - 1] - 'a' + 1;
    cin >> s;
    for (int i = 1; i <= m; i++)
        b[i] = s[i - 1] - 'a' + 1;

    for (int i = 1; i <= m; i++)
        pos[b[i]].push_back(i);

    // -1 表示无解
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++)
            f[i][j] = -1;
    f[0][0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            f[i][j] = f[i - 1][j];
            if (j >= 1 && f[i - 1][j - 1] != -1)
            {
                // a[1]~a[i-1] 凑出了 j 的长度，用到了 b[1]~b[f[i-1][j-1]]
                // a[i] 可以使用 f[i-1][j-1]+1 ~ m 范围内的所有字母，找一个最小的
                int idx = lower_bound(pos[a[i]].begin(),
                                      pos[a[i]].end(),
                                      f[i - 1][j - 1] + 1) -
                          pos[a[i]].begin();
                if (idx != pos[a[i]].size())
                {
                    // 可以凑出来 j 的长度，其中 a[i] 对应的 b[pos[a[i]][idx]]
                    if (f[i][j] == -1 || pos[a[i]][idx] < f[i][j])
                        f[i][j] = pos[a[i]][idx];
                }
            }
        }
    }
    for (int i = n; i >= 0; i--)
    {
        if (f[n][i] != -1)
        {
            cout << i << "\n";
            return 0;
        }
    }
    return 0;
}