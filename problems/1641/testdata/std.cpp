#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, ans;
int a[100000+5];
int R[64]; // 2^i-1
bool check2(int x)
{
	return binary_search(R + 1, R + 63 + 1, x);
}
// 从 pos 到 2^m-1 的路程
int cal(int m, int pos)
{
	int res = 0;
	// 检查 pos+1 是不是 2 的整数次幂
	while (!check2(pos))
	{
		pos /= 2;
		res++;
	}
	while (pos != (1LL << m) - 1)
	{
		pos = pos * 2 + 1;
		res++;
	}
	return res;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	R[0] = 0;
	for (int i = 1; i <= 63; i++)
		R[i] = R[i - 1] * 2 + 1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	ans = 0;
	for (int i = 1; i <= n; i++)
		ans = max(ans, cal(m, a[i]));
	cout << ans;
	return 0;
}