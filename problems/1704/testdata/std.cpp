#include <bits/stdc++.h>
using namespace std;
int n, s, e;
int a[15], b[15];
bool vis[15];
int main()
{
    cin >> n >> s >> e;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];
    vis[s] = true;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (vis[a[j]])
                vis[b[j]] = true;
    if (vis[e])
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}