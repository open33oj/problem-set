#include <bits/stdc++.h>
using namespace std;
long long a;
long long x, y, temp;
int main()
{
	cin >> a;
	x = y = 0;
	// a^a
	temp = 1;
	for (int i = 1; i <= a; i++)
		temp *= a;
	x += temp;
	// a!
	temp = 1;
	for (int i = 1; i <= a; i++)
		temp *= i;
	x += temp;
	// 2*a
	x += 2 * a;
	// a^2+a
	y = a * a + a;
	// output
	cout << x - y;
	return 0;
}