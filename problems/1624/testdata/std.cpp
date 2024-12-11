#include <bits/stdc++.h>
#define int long long
using namespace std;
int a, b;
signed main()
{
    cin >> a >> b;
    // 调整为 a>=b
    if (b > a)
        swap(a, b);
    // 输出每一位
    bool zero = true;
    for (int i = 1'000'000'000'000'000'000; i; i /= 10)
    {
        int x = a / i % 10;
        int y = b / i % 10;
        int z = (x + y) % 10;
        if (z != 0)
            zero = false;
        if (z || !zero) // z>0 || (z==0 && zero==false)
            cout << z;
    }
    if (zero)
        cout << 0;
    return 0;
}