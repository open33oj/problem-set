#include <bits/stdc++.h>
using namespace std;
string s;
string t = "wotojo";
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> s;
    int ans = s.size();
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'w')
            continue;
        int now = 1; // 下一个要查询的字符为 t[now]
        for (int j = i + 1; j < s.size(); j++)
        {
            // 匹配上最近的一个
            if (s[j] == t[now])
                now++;
            if (now == 6)
            {
                // 到 j 的位置时六个字符都找到了
                // 即 s[i] ~ s[j] 这个子串中存在子序列 wotojo
                // 显然这是 i 开头最短的子串
                ans = min(ans, j - i + 1);
                break;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}