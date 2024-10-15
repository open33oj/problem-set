#include <bits/stdc++.h>
using namespace std;
int n, m;
char g[105][105];
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> g[i][j];
	int cnt = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			if (g[i][j] == '*')
				continue;
			bool flag = false;
			for (int x = i - 1; x <= i + 1; x++)
				for (int y = j - 1; y <= j + 1; y++)
					if (g[x][y] == '*')
						flag = true;
			cnt += flag;
		}
	cout << cnt;
	return 0;
}