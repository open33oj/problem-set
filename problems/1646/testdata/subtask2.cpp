// subtask 2
#include <bits/stdc++.h>
using namespace std;
int n, m, k;
int x, y, xx, yy;
char g[1005][1005];
int dis[1005][1005];
queue<pair<int, int>> q;
int dx[] = {0, 0, 1, -1};
int dy[] = {-1, 1, 0, 0};
int main()
{
    freopen("hun.in", "r", stdin);
    freopen("hun.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m >> k;
    cin >> x >> y >> xx >> yy;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> g[i][j];
    assert(g[x][y] != '@' && g[xx][yy] != '@');
    q.push(make_pair(x, y));
    dis[x][y] = 1;
    while (!q.empty() && !dis[xx][yy])
    {
        pair<int, int> now = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                int nx = now.first + dx[i] * j;
                int ny = now.second + dy[i] * j;
                if (nx < 1 || nx > n || ny < 1 || ny > m ||
                    g[nx][ny] == '@')
                    break;
                if (dis[nx][ny])
                    continue;
                dis[nx][ny] = dis[now.first][now.second] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }
    if (dis[xx][yy])
        cout << dis[xx][yy] - 1 << "\n";
    else
        cout << -1 << "\n";
    return 0;
}