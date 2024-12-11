#include <bits/stdc++.h>
using namespace std;
int n, m;
int l[5005], r[5005];
int typ[5005];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> l[i] >> r[i];

    for (int i = 1; i <= n; i++)
        typ[i] = 0;
    for (int i = 1; i <= m; i++)
        for (int j = l[i]; j <= r[i]; j++)
            typ[j] = i;
    sort(typ + 1, typ + n + 1);
    /*
    for (int i = 1; i <= n; i++)
        cout << typ[i];
    cout << "\n";
    */
    int ans = (typ[1] != 0);
    for (int i = 2; i <= n; i++)
        if (typ[i] != typ[i - 1])
            ans++;
    cout << ans;
    return 0;
}