#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> e[5005];
queue<int> q;
bool f[5005];
int main()
{
    // freopen("fan.in", "r", stdin);
    // freopen("fan.out", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int ai, bi;
        cin >> ai >> bi;
        for (int j = ai; j <= n; j++)
            e[j].push_back(j - ai + bi);
    }
    q.push(n);
    f[n] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : e[u])
        {
            if (!f[v])
            {
                f[v] = true;
                q.push(v);
            }
        }
    }
    for (int i = 0; i <= n; i++)
        if (f[i])
        {
            cout << i;
            return 0;
        }
    return 0;
}