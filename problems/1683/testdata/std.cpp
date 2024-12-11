// 一开始我这标程写错了，感谢黄承翊的反馈~
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MOD = 1'000'000'000 + 7;
int n;
int a[5005];
int f[5005]; // 以 a[i] 结尾的最长上升子序列长度
int g[5005]; // 以 a[i] 结尾的最长上升子序列方案数
signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int ansF = 0; // 最长上升子序列的长度
    for (int i = 1; i <= n; i++)
    {
        f[i] = 1;
        for (int j = 1; j < i; j++)
            if (a[j] < a[i])
                f[i] = max(f[i], f[j] + 1);
        ansF = max(ansF, f[i]);
        if (f[i] == 1)
            g[i] = 1;
        else
        {
            g[i] = 0;
            for (int j = 1; j < i; j++)
                if (a[j] < a[i] && f[j] == f[i] - 1)
                    g[i] += g[j];
            g[i] %= MOD;
        }
    }
    int ans = 0; // 最长上升子序列的方案数
    for (int i = 1; i <= n; i++)
        if (f[i] == ansF)
            ans += g[i];
    cout << ans % MOD;
    return 0;
}
