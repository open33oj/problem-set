#include <bits/stdc++.h>
using namespace std;
int L, M, x;
bool a[5005];
int main()
{
    cin >> L >> M >> x;
    for (int i = 0; i <= L; i++)
        a[i] = true;
    for (int i = 1; i <= M; i++)
    {
        int l, r;
        cin >> l >> r;
        for (int j = l; j <= r; j++)
            a[j] = false;
    }
    int now = 0;
    int ans = 0;
    for (int i = 0; i <= L; i++)
    {
        if (a[i] == true)
            now++;
        else
        {
            if (now >= x)
                ans++;
            now = 0;
        }
    }
    if (now >= x)
        ans++;
    cout << ans << "\n";
    return 0;
}