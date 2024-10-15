#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char c;
    cin >> a >> c >> b;
    // 转换为分钟
    int t = a * 60 + b;
    // 往前数 15 小时
    t -= 15 * 60;
    if (t < 0)
        t += 24 * 60;
    // 转换回小时
    a = t / 60;
    b = t % 60;
    // 按格式输出
    if (a < 10)
        cout << "0" << a;
    else
        cout << a;
    cout << ":";
    if (b < 10)
        cout << "0" << b;
    else
        cout << b;
    return 0;
}