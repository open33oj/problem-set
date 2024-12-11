#include <bits/stdc++.h>
using namespace std;
int n;
char g[505][505];
bool vis[505][505];
// @ 数量 . 数量
vector<pair<int, int>> v;
bool cmp(pair<int, int> x, pair<int, int> y)
{
	// x.first/(x.first+x.second) < y.first/(y.first+y.second)
	int xy = x.first * (y.first + y.second);
	int yx = y.first * (x.first + x.second);
	if (xy != yx)
		return xy < yx;
	return x.first < y.first;
}
queue<pair<int, int>> q;
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {1, -1, 0, 0, 1, 1, -1, -1};
pair<int, int> bfs(int x, int y)
{
	// @  .
	pair<int, int> res = make_pair(0, 0);
	// 起点入队
	q.push(make_pair(x, y));
	vis[x][y] = true;
	if (g[x][y] == '@')
		res.first++;
	else
		res.second++;
	// bfs
	while (!q.empty())
	{
		pair<int, int> pos = q.front();
		q.pop();
		for (int i = 0; i < 8; i++)
		{
			int nx = pos.first + dx[i];
			int ny = pos.second + dy[i];
			if (!vis[nx][ny] && g[nx][ny] != '#')
			{
				q.push(make_pair(nx, ny));
				vis[nx][ny] = true;
				if (g[nx][ny] == '@')
					res.first++;
				else
					res.second++;
			}
		}
	}
	return res;
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> g[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			vis[i][j] = false;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (!vis[i][j] && g[i][j] != '#')
				v.push_back(bfs(i, j));
	sort(v.begin(), v.end(), cmp);
	cout << v.size() << " " << v[0].first;
	return 0;
}