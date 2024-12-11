#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[25];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	int ans = 0;
	for (int i = 1; i <= m; i++)
	{
		int now = 0;
		for (int j = 1; j <= n; j++)
			if (i % a[j] == 0)
				now++;
		ans = max(ans, now);
	}
	cout << ans;
	return 0;
}