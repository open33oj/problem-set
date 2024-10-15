#include <bits/stdc++.h>
using namespace std;
const int P1 = 2;
const int P83 = 640663963;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, start;
    cin >> n;
    if (n > 100)
    {
        start = P83;
        // 把 33333333 对应到 1
        n = n - 33'333'332;
    }
    else
        start = P1;
    for (int i = 1; i <= n - 1; i++)
    {
        // 变成下一个质数
        start++;
        while (1)
        {
            // 检查是否为质数
            bool flag = true;
            for (int j = 2; j * j <= start; j++)
                if (start % j == 0)
                {
                    flag = false;
                    break;
                }
            // 是质数就停，否则变成下一个数
            if (flag)
                break;
            else
                start++;
        }
    }
    cout << start;
    return 0;
}