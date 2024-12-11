#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100;
const int MAXTOT = MAXN * MAXN;
int n, tot;
int a[MAXN + 5][MAXN + 5];
int getId(int x, int y)
{
	return (x - 1) * n + y;
}
vector<int> e[MAXTOT + 5];

// tarjan
int idx, dfn[MAXTOT + 5], low[MAXTOT + 5];
stack<int> s;
bool inS[MAXTOT + 5];
// 新图
int id[MAXTOT + 5];			// 原图点 i 缩到了新图的哪个点
int w[MAXTOT + 5];			// 新图一个点是之前多少个点
vector<int> ee[MAXTOT + 5]; // 新图存边
// 存 SCC
// int sccCnt;
// vector<int> scc[MAXTOT + 5];
void dfs(int u)
{
	dfn[u] = low[u] = ++idx;
	s.push(u);
	inS[u] = true;
	for (int v : e[u])
	{
		if (dfn[v] == 0)
		{
			dfs(v);
			low[u] = min(low[u], low[v]);
		}
		else if (inS[v])
			low[u] = min(low[u], dfn[v]);
	}
	// 当前点是某个 scc 的根
	if (dfn[u] == low[u])
	{
		//++sccCnt;
		while (s.top() != u)
		{
			id[s.top()] = u; // 缩到 u 上
			w[u]++;
			inS[s.top()] = false;
			// scc[sccCnt].push_back(s.top());
			s.pop();
		}
		// 处理 u
		id[s.top()] = u; // 缩点
		w[u]++;
		inS[s.top()] = false;
		// scc[sccCnt].push_back(s.top());
		s.pop();
	}
}
// 新图的 DAG 上 DP 的拓扑排序
int d[MAXTOT + 5];					// 新图每个点的入度
queue<int> q;						// 拓扑排序广搜的队列
vector<int> order;					// 拓扑序
bitset<MAXTOT + 5> can[MAXTOT + 5]; // 每个点能到哪些点
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	// 建图
	tot = n * n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			int id = getId(i, j);
			if (a[i][j] == 0)
				continue;
			// (i,j) -> (x,y)
			if (i - a[i][j] >= 1)
			{
				int x = i - a[i][j];
				for (int y = max(1, j - a[i][j]);
					 y <= min(n, j + a[i][j]);
					 y++)
					e[id].push_back(getId(x, y));
			}
			if (i + a[i][j] <= n)
			{
				int x = i + a[i][j];
				for (int y = max(1, j - a[i][j]);
					 y <= min(n, j + a[i][j]);
					 y++)
					e[id].push_back(getId(x, y));
			}
			if (j - a[i][j] >= 1)
			{
				int y = j - a[i][j];
				for (int x = max(1, i - a[i][j]);
					 x <= min(n, i + a[i][j]);
					 x++)
					e[id].push_back(getId(x, y));
			}
			if (j + a[i][j] <= n)
			{
				int y = j + a[i][j];
				for (int x = max(1, i - a[i][j]);
					 x <= min(n, i + a[i][j]);
					 x++)
					e[id].push_back(getId(x, y));
			}
		}

	// 缩点
	for (int i = 1; i <= tot; i++)
		if (dfn[i] == 0)
			dfs(i);
	// 建新图（反图）
	for (int u = 1; u <= tot; u++)
	{
		if (id[u] == u)
			can[u][u] = 1;
		for (int v : e[u])
		{
			if (id[u] != id[v])
			{
				ee[id[v]].push_back(id[u]);
				d[id[u]]++;
			}
		}
	}

	// 拓扑排序
	for (int i = 1; i <= tot; i++)
		if (id[i] == i && d[i] == 0)
			q.push(i);
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		order.push_back(u);
		for (int v : ee[u])
		{
			d[v]--;
			if (d[v] == 0)
				q.push(v);
		}
	}

	// 调试
	/*
	cout << "缩点后 id" << "\n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << id[getId(i, j)] << " ";
		cout << "\n";
	}
	cout << "缩点后 w" << "\n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << w[getId(i, j)] << " ";
		cout << "\n";
	}
	cout << "缩点后边" << "\n";
	for (int i = 1; i <= tot; i++)
		for (int j : ee[i])
			cout << i << " " << j << "\n";
	*/
	// 合并每个点能到的点
	for (int u : order)
	{
		for (int v : ee[u])
			can[v] |= can[u];
	}

	// 找最大值
	int ans = 0;
	for (int i = 1; i <= tot; i++)
	{
		int now = 0;
		for (int j = 1; j <= tot; j++)
			if (can[i][j])
			{
				now += w[j];
			}
		ans = max(ans, now);
	}
	cout << ans << "\n";
	return 0;
}