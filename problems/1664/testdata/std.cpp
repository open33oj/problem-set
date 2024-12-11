#include <bits/stdc++.h>
using namespace std;
double a, b;
int main()
{
    freopen("shui.in", "r", stdin);
    freopen("shui.out", "w", stdout);
    cin >> a >> b;
    double k = floor(a / b);
    while (a <= k * b)
        k -= 1;
    while (a > (k + 1) * b)
        k += 1;
    cout << fixed << setprecision(12) << a - k * b;
    return 0;
}