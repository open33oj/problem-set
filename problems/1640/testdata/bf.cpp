#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
int a, b;
signed main()
{
	freopen("jie.in", "r", stdin);
	freopen("jie.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	a = 1, b = 2;
	for (int i = 1; i <= n; i++)
		for (int j = i + 1; j <= n; j++)
			if (abs(n - 3 * i - 4 * j) < abs(n - 3 * a - 4 * b))
				a = i, b = j;
	cout << a << " " << b << " " << a + b << " " << a + 2 * b << "\n";
	return 0;
}