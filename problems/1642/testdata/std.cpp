// std
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MOD = 1'000'000'000 + 7;
const int MAXM = 20'000'000;
int m, k;
int ans[MAXM + 5];
// 质数数量大概是 n/ln(n)
int tot, p[MAXM / 15 + 5];
bool notP[MAXM + 5];
void init()
{
    tot = 0;
    ans[1] = 1;
    for (int i = 2; i <= m; i++)
    {
        if (!notP[i])
        {
            p[++tot] = i;
            ans[i] = i * k % MOD;
        }
        for (int j = 1; j <= tot && i * p[j] <= m; j++)
        {
            notP[i * p[j]] = true;
            ans[i * p[j]] = ans[i] * ans[p[j]] % MOD;
            if (i % p[j] == 0)
                break;
        }
    }
}

signed main()
{
    freopen("yu.in", "r", stdin);
    freopen("yu.out", "w", stdout);
    cin >> m >> k;
    init();
    int sum = 0;
    for (int i = 1; i <= m; i++)
        sum = sum ^ ans[i];
    cout << sum;
    return 0;
}