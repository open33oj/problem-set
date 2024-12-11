#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
// a,b,a+b,(b)+(a+b)
// 3a+4b 接近 n
int a, b, aa, bb;
// 返回 res(res>a) 使得 4*res 尽可能接近 x
int gen(int nowA, int x)
{
	int res = nowA + 1;
	for (int i = max(nowA + 1, x / 4); i <= x / 4 + 4; i++)
		if (abs(x - i * 4) < abs(x - res * 4))
			res = i;
	return res;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	int a = 1, b = 2;
	for (int i = 1; i <= 100; i++) // 实际上 4 就够了
	{
		int j = gen(i, n - 3 * i);
		if (abs(n - 3 * i - 4 * j) < abs(n - 3 * a - 4 * b))
			a = i, b = j;
	}
	cout << a << " " << b << " " << a + b << " " << a + 2 * b << "\n";
	return 0;
}
