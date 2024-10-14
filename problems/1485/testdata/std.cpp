#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, a, b, c;
    cin >> n;
    a = b = c = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        c++;
        if (c > 120)
        {
            b++;
            c = 1;
        }
        if (b > 3)
        {
            a++;
            b = 1;
        }
    }
    cout << a << " " << b << " " << c << "\n";
    return 0;
}