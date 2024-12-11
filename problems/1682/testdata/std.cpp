#include <bits/stdc++.h>
using namespace std;
int n;
int a[5005];
int f[5005]; // 以 a[i] 结尾的最长子序列
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		f[i] = 1;
		for (int j = 1; j < i; j++)
			if (a[j] % 2 != a[i] % 2 && a[j] < a[i])
				f[i] = max(f[i], f[j] + 1);
		ans = max(ans, f[i]);
	}
	cout << ans;
	return 0;
}