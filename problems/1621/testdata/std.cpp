#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> e[105];
bool f[105][10000 + 5];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int num, x;
        cin >> num;
        for (int j = 1; j <= num; j++)
        {
            cin >> x;
            e[i].push_back(x);
        }
    }
    f[0][0] = true;
    for (int i = 1; i <= n; i++)
        for (int v = 10000; v >= 0; v--)
            for (int j = 0; j < e[i].size(); j++)
            {
                int now = e[i][j];
                if (v >= now)
                    f[i][v] = f[i][v] | f[i - 1][v - now];
            }
    int ans = 0;
    for (int i = 0; i <= 10000; i++)
        if (f[n][i])
            ans++;
    cout << ans;
    return 0;
}