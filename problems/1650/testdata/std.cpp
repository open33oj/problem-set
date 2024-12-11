#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MAXN = 1000;
const int MAXM = MAXN * (MAXN - 1) / 2;
int n, m, power;
int a[MAXN + 5];
bool vis[MAXN + 5];			// 走没走过
bool can[MAXN + 5];			// 能不能走到
bool e[MAXN + 5][MAXN + 5]; // 是否相连
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= m; i++)
	{
		int u, v;
		cin >> u >> v;
		e[u][v] = e[v][u] = true;
	}
	can[1] = true;
	power = 0;
	bool flag = true; // 还要不要找
	int cnt = 0;	  // test
	while (flag)
	{
		flag = false;
		for (int i = 1; i <= n; i++)
		{
			if (!vis[i] && can[i] && (i == 1 || power >= a[i]))
			{
				vis[i] = true;
				power += a[i];
				cnt++;
				// 相连的都能走了
				for (int j = 1; j <= n; j++)
					if (e[i][j])
						can[j] = true;
				flag = true; // 可能还要找
			}
		}
	}
	cout << power << "\n";
	return 0;
}
// 显然这是纯暴力图上贪心，不能算是最小生成树，所以不能算超纲（