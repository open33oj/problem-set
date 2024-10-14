#include <bits/stdc++.h>
using namespace std;
int n, m;
char g[55][55];
// 左上、上、右上、左、右、左下、下右下
int dx[] = {0, -1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {0, -1, 0, 1, -1, 1, -1, 0, 1};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 2; i <= n + 1; i++)
        for (int j = 2; j <= m + 1; j++)
            cin >> g[i][j];
    int ans = 0;
    for (int i = 2; i <= n + 1; i++)
        for (int j = 2; j <= m + 1; j++)
        {
            if (g[i][j] == '#')
                continue;
            bool flag = false;
            // 作为端点的八个方向
            for (int k = 1; k <= 8; k++)
            {
                int x = i + dx[k];
                int y = j + dy[k];
                int xx = i + 2 * dx[k];
                int yy = j + 2 * dy[k];
                if (g[x][y] == '#' && g[xx][yy] == '#')
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                ans++;
                continue;
            }
            // 作为中间点的四个方向
            for (int k = 1; k <= 4; k++)
            {
                int x = i + dx[k];
                int y = j + dy[k];
                int xx = i - dx[k];
                int yy = j - dy[k];
                if (g[x][y] == '#' && g[xx][yy] == '#')
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                ans++;
        }
    cout << ans << "\n";
    return 0;
}