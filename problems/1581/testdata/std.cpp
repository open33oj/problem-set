#include <bits/stdc++.h>
using namespace std;
int n, x;
int a, b, c;
int main()
{
	a = b = c = -1'000'000'000 - 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		if (x >= a)
		{
			c = b;
			b = a;
			a = x;
		}
		else if (x >= b)
		{
			c = b;
			b = x;
		}
		else if (x >= c)
		{
			c = x;
		}
	}
	cout << c;
	return 0;
}