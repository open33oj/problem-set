#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, x;
    cin >> k >> x;
    int ans = 0;
    int cnt = 0;
    for (int i = 1;; i *= 2)
    {
        cnt += i;
        ans++;
        if (cnt >= x)
        {
            cout << min(k, ans);
            return 0;
        }
    }
    return 0;
}