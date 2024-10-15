#include <bits/stdc++.h>
using namespace std;
int n3[10];
string s, ss[10];
int main()
{
    int n;
    cin >> n;

    // 构建 3**i
    n3[0] = 1;
    for (int i = 1; i <= n; i++)
        n3[i] = n3[i - 1] * 3;

    // 构建 3**i 个 .
    for (int i = 0; i <= n; i++)
    {
        ss[i] = "";
        for (int j = 0; j < n3[i]; j++)
            ss[i] += '.';
    }

    // 计算分形图
    s = "#";
    for (int i = 1; i <= n; i++)
        s = s + ss[i - 1] + s;

    cout << s;
    return 0;
}