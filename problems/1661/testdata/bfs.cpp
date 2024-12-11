#include <bits/stdc++.h>
using namespace std;
const int MAXN = 500;
int n;
int a[MAXN + 5][MAXN + 5];
// vis[i][j] 为 idx 的时候表示当前这轮访问过了
int idx, vis[MAXN + 5][MAXN + 5];
queue<pair<int, int>> q;
int bfs(int x, int y)
{
	int res = 1;
	q.push(make_pair(x, y));
	vis[x][y] = idx;
	while (!q.empty())
	{
		pair<int, int> now = q.front();
		q.pop();
		x = now.first;
		y = now.second;
		for (int i = -a[x][y]; i <= a[x][y]; i++)
		{
			// (x-a[x][y],i) (x+a[x][y],j)
			// (i,y-a[x][y]) (i,y+a[x][y])
			int xx, yy;
			xx = x - a[x][y];
			yy = y + i;
			if (1 <= xx && xx <= n &&
				1 <= yy && yy <= n &&
				vis[xx][yy] != idx)
			{
				res++;
				q.push(make_pair(xx, yy));
				vis[xx][yy] = idx;
			}
			xx = x + a[x][y];
			yy = y + i;
			if (1 <= xx && xx <= n &&
				1 <= yy && yy <= n &&
				vis[xx][yy] != idx)
			{
				res++;
				q.push(make_pair(xx, yy));
				vis[xx][yy] = idx;
			}
			xx = x + i;
			yy = y - a[x][y];
			if (1 <= xx && xx <= n &&
				1 <= yy && yy <= n &&
				vis[xx][yy] != idx)
			{
				res++;
				q.push(make_pair(xx, yy));
				vis[xx][yy] = idx;
			}
			xx = x + i;
			yy = y + a[x][y];
			if (1 <= xx && xx <= n &&
				1 <= yy && yy <= n &&
				vis[xx][yy] != idx)
			{
				res++;
				q.push(make_pair(xx, yy));
				vis[xx][yy] = idx;
			}
		}
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			// 大于等于 n 的都等价于 n，都是访问不到任意位置
			a[i][j] = min(a[i][j], n);
		}
	idx = 0;
	int ans = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			idx++;
			ans = max(ans, bfs(i, j));
		}
	cout << ans;
	return 0;
}