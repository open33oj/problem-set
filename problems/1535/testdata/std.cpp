#include <bits/stdc++.h>
using namespace std;
int X, n;
int a[1005];
int main()
{
    cin >> X >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    long long sum = 0;
    for (int i = 1; i <= n; i++)
        sum += a[i];
    bool flag = true;
    for (int i = 3; i <= n; i++)
        if (a[i] - a[i - 1] != a[2] - a[1])
        {
            flag = false;
            break;
        }
    if (sum == X && flag)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}