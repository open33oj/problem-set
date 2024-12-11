#include <bits/stdc++.h>
#define int long long
using namespace std;
bool p(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}
int gen(int x)
{
    int xx = x;
    x /= 10;
    while (x > 0)
    {
        xx = xx * 10 + x % 10;
        x /= 10;
    }
    return xx;
}
bool test7(int x)
{
    while (x > 0)
    {
        if (x % 10 == 7)
            return true;
        x /= 10;
    }
    return false;
}
int n, cnt;
signed main()
{
    cin >> n;
    cnt = 0;
    for (int i = 1;; i++)
    {
        int x = gen(i);
        if (x > n)
            break;
        if (!test7(x))
            continue;
        if (!p(x))
            continue;
        cnt++;
    }
    cout << cnt;
    return 0;
}