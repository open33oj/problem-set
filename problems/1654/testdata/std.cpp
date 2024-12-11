#include <bits/stdc++.h>
using namespace std;
const int INF = 5000 * 5000 + 5;
int n;
vector<pair<int, int>> e[5005];
int dis[5005];
void dfs(int u, int fa)
{
    int sum = 0;
    for (int i = 0; i < e[u].size(); i++)
    {
        int v = e[u][i].first;
        int w = e[u][i].second;
        if (v == fa)
            continue;
        dis[v] = w;
        dfs(v, u);
        sum += dis[v];
    }
    if (sum != 0)
        dis[u] = min(dis[u], sum);
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n - 1; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        e[u].push_back(make_pair(v, w));
        e[v].push_back(make_pair(u, w));
    }
    dis[1] = INF;
    dfs(1, 0);
    cout << dis[1];
    return 0;
}