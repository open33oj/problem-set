// 暴力
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1'000'000;
int n, m, k;
int x, y, xx, yy;
char temp;
vector<char> g[MAXN + 5];
vector<int> dis[MAXN + 5];
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
    {
        g[i].push_back('@');
        dis[i].push_back(0);
        for (int j = 1; j <= m; j++)
        {
            cin >> temp;
            g[i].push_back(temp);
            dis[i].push_back(0);
        }
    }
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