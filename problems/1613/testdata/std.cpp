#include <bits/stdc++.h>
using namespace std;
int n;
bool f[10000000 + 5];
vector<int> p;
int main()
{
    cin >> n;
    f[0] = f[1] = true;
    for (int i = 2; i <= n; i++)
    {
        if (!f[i])
        {
            p.push_back(i);
            for (int j = i + i; j <= n; j += i)
                f[j] = true;
        }
    }
    // p1*p2 <= n
    int ans = 0;
    for (int i = 0; i < p.size(); i++)
    {
        // 最后一个小于等于 n/p[1] 的数
        int pos = upper_bound(p.begin(), p.end(), n / p[i]) - p.begin() - 1;
        if (pos <= i)
            break;
        ans += pos - i;
    }
    // p1 * p1 * p1
    for (int i = 0; i < p.size(); i++)
        if (p[i] * p[i] * p[i] > n)
        {
            ans += i;
            break;
        }
    cout << ans;
    return 0;
}