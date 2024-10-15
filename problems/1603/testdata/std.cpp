#include <bits/stdc++.h>
using namespace std;
const double L = 16;
const double R = 20000;
int a, t, b, n;
double info[100000 + 5];
int info_int[100000 + 5];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> a >> t >> b;
    n = a * t;
    for (int i = 1; i <= n; i++)
        cin >> info[i];
    // 这一部分也可以直接生成 2^b 个分界点然后二分
    // 我直接数学方法算了
    double p = (R - L) / (1 << b);
    for (int i = 1; i <= n; i++)
    {
        info_int[i] = (info[i] - 16) / p;
        if (info_int[i] == (1 << b))
            info_int[i]--;
    }
    // 可以转为二进制输出
    // 我直接位运算处理了
    for (int i = 1; i <= n; i++)
        for (int j = b - 1; j >= 0; j--)
            cout << ((info_int[i] >> j) & 1);
    return 0;
}