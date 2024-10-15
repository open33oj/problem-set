#include <bits/stdc++.h>
using namespace std;
const int MOD = 1'000'000'000 + 7;
const int MAXN = 1'000'000;
int n, a, b;
int ans;
bool vis[MAXN + 5];
int dx[] = {1, -1, 2, -2};
void dfs(int now)
{
    if (now == b)
    {
        ans = (ans + 1) % MOD;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int nxt = now + dx[i];
        if (nxt < 0 || nxt > n || vis[nxt])
            continue;
        vis[nxt] = true;
        dfs(nxt);
        vis[nxt] = false;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> a >> b;
    ans = 0;
    vis[a] = true;
    dfs(a);
    vis[a] = false;
    cout << ans;
    return 0;
}