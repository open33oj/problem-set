#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int r = n / 4;	   // 所属轮数
	int t = n % 4 + 1; // 在那一场比赛中的题号
	if (r <= 5)
		cout << r + 1;
	else
		cout << r / 2 - 2;
	return 0;
}