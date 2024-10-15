#include <bits/stdc++.h>
using namespace std;
int n, ai, ans;
bool f(int x)
{
    if (1 <= x && x <= 9)
        return true;
    if (10 <= x && x <= 99)
        return x % 10 == x / 10;
    if (100 <= x && x <= 999)
        return x % 10 == x / 100;
    return true; // 其实没必要
}
int main()
{
    cin >> n;
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> ai;
        while (!f(ai))
        {
            ans++;
            ai++;
        }
    }
    cout << ans;
    return 0;
}