#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000;
int n, L;
int s[MAXN + 5], e[MAXN + 5];
int main()
{
    cin >> n >> L;
    for (int i = 1; i <= n; i++)
        cin >> s[i] >> e[i];
    int ans = 0;
    for (int i = 0; i <= L; i++)
    {
        bool flag = true;
        for (int j = 1; j <= n; j++)
            if (i < s[j] || e[j] < i)
            {
                flag = false;
                break;
            }
        ans += flag;
    }
    cout << ans;
    return 0;
}