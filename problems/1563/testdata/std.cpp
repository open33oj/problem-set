#include <bits/stdc++.h>
using namespace std;
int n, k, l, r;
// 1~x 的答案
int f(int x)
{
    int a = x / k; // k 的倍数
    // 个位是 k 的数
    int b = x / 10; // [0~(x/10-1)]k
    if (x % 10 >= k)
        b++; // [x/10]k
    // 个位是 k 且是 k 的倍数
    int kk = k;
    if (k % 2 == 0)
        kk /= 2;
    if (k % 5 == 0)
        kk /= 5;
    int c = max(0, (x / 10 - 1) / kk); //[1~x/10-1]k
    if (x / 10 >= 1 && x % 10 >= k && x / 10 * 10 % k == 0)
        c++; //[x/10]k
    if (x >= k)
        c++; //[0]k
    return a + b - c;
}
int main()
{
    cin >> n >> k;
    while (n--)
    {
        cin >> l >> r;
        cout << f(r) - f(l - 1) << '\n';
    }
    return 0;
}