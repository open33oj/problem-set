#include <bits/stdc++.h>
using namespace std;
string s;
int ans1 = 0; // 最大
int ans2 = 0; // 次大
// 用 now 更新最大次大
void freshAns(int now)
{
	if (now >= ans1)
	{
		ans2 = ans1;
		ans1 = now;
	}
	else if (now >= ans2)
		ans2 = now;
}
int main()
{
	cin >> s;
	int now = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '0')
		{
			freshAns(now);
			now = 0;
			continue;
		}
		// 此时 s[i] 必然是 1
		if (i == 0 || s[i - 1] == '0')
			now = 1;
		else
			now++;
	}
	freshAns(now);
	cout << max(ans2, ans1 / 2);
	return 0;
}