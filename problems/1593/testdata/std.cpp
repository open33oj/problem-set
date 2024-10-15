#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long ans, x;
    char op;
    cin >> ans;
    while (cin >> op >> x)
    {
        if (op == '-')
            ans -= x;
        if (op == '+')
            ans += x;
    }
    cout << ans;
    return 0;
}