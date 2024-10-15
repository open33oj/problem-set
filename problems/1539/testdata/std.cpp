#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MOD = 988244353;
string s[10] = {
    "YYYYYYN", "NYYNNNN", "YYNYYNY", "YYYYNNY", "NYYNNYY",
    "YNYYNYY", "YNYYYYY", "YYYNNNN", "YYYYYYY", "YYYYNYY"};
int n;
// 检查 a 是否可能是 b 换掉几个之后的结果
bool check(string &a, string &b)
{
    for (int i = 0; i < 7; i++)
        if (a[i] == 'Y' && b[i] == 'N')
            return false;
    return true;
}
signed main()
{
    cin >> n;
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        string temp;
        cin >> temp;
        int nowCnt = 0; // 当前位有几种可能
        for (int i = 0; i < 10; i++)
            if (check(temp, s[i]))
                nowCnt++;
        ans = (ans * nowCnt) % MOD;
    }
    cout << ans;
    return 0;
}