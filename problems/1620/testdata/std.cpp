#include <bits/stdc++.h>
#define int long long
using namespace std;
void outInt128(__int128 x)
{
    int num = x % 10;
    if (x / 10 > 0)
        outInt128(x / 10);
    cout << num;
}
signed main()
{
    int l, r;
    cin >> l >> r;
    __int128 sum = 0;
    for (int i = 1; i <= 10000000; i++)
    {
        __int128 L = i * i;
        __int128 R = (i + 1) * (i + 1) - 1;
        if (R < l)
            continue;
        if (L > r)
            break;
        if (R > r)
            R = r;
        if (L < l)
            L = l;
        sum += i * (R - L + 1);
    }
    outInt128(sum);
    return 0;
}