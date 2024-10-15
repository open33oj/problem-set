#include <bits/stdc++.h>
using namespace std;
string g[4] = {"./\\.", "/..\\", "\\../", ".\\/."};
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int row = 0; row <= 3; row++)
		{
			for (int j = 1; j <= m; j++)
			{
				cout << g[row];
			}
			cout << "\n";
		}
	return 0;
}