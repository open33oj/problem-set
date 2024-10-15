#include <bits/stdc++.h>
using namespace std;
int l, r, maxCnt;
int f[100'000'000 + 5];
void dfs(int l, int r, int cnt)
{
    if (l > r)
        return;
    int mid = (l + r) / 2;
    f[mid] = cnt;
    maxCnt = max(maxCnt, cnt);
    dfs(l, mid - 1, cnt + 1);
    dfs(mid + 1, r, cnt + 1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int l, r;
    cin >> l >> r;
    maxCnt = 0;
    dfs(l, r, 1);
    int ans = 0;
    for (int i = l; i <= r; i++)
        if (f[i] == maxCnt)
            ans++;
    cout << ans;
    return 0;
}