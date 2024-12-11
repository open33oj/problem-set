//埃筛 
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MOD = 1'000'000'000 + 7;
const int MAXM = 20'000'000;
int m, k;
int ans[MAXM + 5];
bool notP[MAXM + 5];
void init()
{
    ans[1] = 1;
    for (int i = 2; i <= m; i++)
    {
        if (notP[i])
            continue;
        ans[i] = i * k % MOD;
        for (int j = 2; j * i <= m; j++)
        {
            ans[j * i] = ans[i] * ans[j] % MOD;
            notP[j * i] = true;
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