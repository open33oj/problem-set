#include <bits/stdc++.h>
using namespace std;
int n, op, pos, x, y;
int a[1005][1005];
int num[1005];
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	for (int t = 1; t <= n; t++)
	{
		cin >> op >> x;
		if (op == 1)
		{
			for (int i = 1; i <= n; i++)
				num[i] = a[x][i];
			sort(num + 1, num + n + 1);
			for (int i = 1; i <= n; i++)
				a[x][i] = num[i];
		}
		if (op == 2)
		{
			for (int i = 1; i <= n; i++)
				num[i] = a[i][x];
			sort(num + 1, num + n + 1);
			for (int i = 1; i <= n; i++)
				a[i][x] = num[i];
		}
	}
	for (int t = 1; t <= n; t++)
	{
		cin >> x >> y;
		cout << a[x][y] << "\n";
	}
	return 0;
}