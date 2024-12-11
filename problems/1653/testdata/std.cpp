#include <bits/stdc++.h>
using namespace std;
int n, k;
bool flag[5005];
int main()
{
    flag[0] = flag[1] = true;
    for (int i = 2; i <= 5000; i++)
    {
        bool now = true;
        for (int j = 2; j < i; j++)
            if (i % j == 0)
                now = false;
        flag[i] = now;
    }
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if (flag[i])
            continue;
        for (int j = i - 1; j >= max(1, i - k); j--)
            if (!flag[j])
                flag[i] = true;
    }
    if (flag[n])
        cout << "33DAI";
    else
        cout << "Kitten";
    return 0;
}