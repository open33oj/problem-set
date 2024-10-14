#include <bits/stdc++.h>
using namespace std;
int n;
int a[1005], b[1005];
int ans, cnt;         // 开心程度、能再吃下的桃子数
int happy[1005], num; // b[i] 为 0 的所有 a[i] 存入 happy
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];
    ans = 0;
    cnt = 1;
    num = 0;
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 0)
        {
            num++;
            happy[num] = a[i];
        }
        else
        {
            ans += a[i];
            cnt += b[i] - 1;
        }
    }
    sort(happy + 1, happy + num + 1, cmp);
    for (int i = 1; i <= min(cnt, num); i++)
        ans += happy[i];
    cout << ans << "\n";
    return 0;
}