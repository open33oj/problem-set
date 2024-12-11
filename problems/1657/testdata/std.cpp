#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 1'000'000'000'000'000'000;
int n, k;
int a[5];
int lcm12, lcm23, lcm13, lcm123;
int gcd(int a, int b)
{
	if (!b)
		return a;
	return gcd(b, a % b);
}
int lcm(int a, int b)
{
	return a / gcd(a, b) * b;
}
// 小于等于 mid 的数中，被保留的是否大于等于 k
bool check(int mid)
{
	int cnt = 0;
	if (n == 1)
		cnt += mid / a[1];
	else if (n == 2)
	{
		cnt += mid / a[1];
		cnt += mid / a[2];
		cnt -= 2 * (mid / lcm12);
	}
	else
	{
		cnt += mid / a[1];
		cnt += mid / a[2];
		cnt += mid / a[3];
		cnt -= 2 * (mid / lcm12);
		cnt -= 2 * (mid / lcm23);
		cnt -= 2 * (mid / lcm13);
		cnt += 3 * (mid / lcm123);
	}
	return cnt >= k;
}
signed main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	if (n == 2)
		lcm12 = lcm(a[1], a[2]);
	else if (n == 3)
	{
		lcm12 = lcm(a[1], a[2]);
		lcm23 = lcm(a[2], a[3]);
		lcm13 = lcm(a[1], a[3]);
		lcm123 = lcm(lcm12, lcm23);
	}
	int l = 1;
	int r = INF;
	int ans = -1;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (check(mid))
		{
			ans = mid;
			r = mid - 1;
		}
		else
			l = mid + 1;
	}
	cout << ans;
	return 0;
}