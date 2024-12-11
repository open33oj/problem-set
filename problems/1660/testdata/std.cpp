#include <bits/stdc++.h>
using namespace std;
int n;
int a[500000 + 5];
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	int ans = 0;
	for (int i = n; i >= 2; i--)
	{
		// 不相等时肯定要变为相等
		if (a[i] != a[i - 1])
		{
			ans += a[i] - a[i - 1];
			a[i] = a[i - 1];
		}
		// 相等之后，所有相等的只要减一次即可
		// 所以三连的不管，只有二连的才去减少一次
		if (i >= 3 && a[i] == a[i - 2])
			ans += 0;
		else
			ans++;
	}
	ans += a[1];
	cout << ans;
	return 0;
}