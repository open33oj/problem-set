#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
	cin >> n;
	int a = n / 100 % 10;
	int b = n / 10 % 10;
	int c = n % 10;
	char aa = 'A' + a;
	char cc = 'z' - c;
	cout << aa << b << cc;
	return 0;
}