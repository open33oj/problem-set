#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    long long ans;
    cin >> n;
    ans = 0;
    for (long long i = 1; i <= n; i++)
    {
        // 将 i 变为一位数
        long long now = i;
        while (now > 9)
        {
            long long num = 0; // 计算 now 的数位和
            while (now > 0)
            {
                num += now % 10;
                now /= 10;
            }
            now = num;
        }
        // 算入答案
        ans += now;
        // cout << i << ":" << now << '\n';
    }
    cout << ans;
    return 0;
}
