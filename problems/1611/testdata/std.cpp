#include <bits/stdc++.h>
using namespace std;
char temp;
int a, b, c, d;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> temp;
    a = temp - '0';
    cin >> temp;
    b = temp - '0';
    cin >> temp;
    c = temp - '0';
    cin >> temp;
    d = temp - '0';

    int ans = a + b + c + d;

    if (a == b && b == c && c == d)
        ans += b * b * b * b;
    else if (a == b && b == c || b == c && c == d)
        ans += b * b * b;
    else if (a == b && c == d)
        ans += a * a + c * c;
    else if (a == b || b == c)
        ans += b * b;
    else if (c == d)
        ans += c * c;

    if (a == 8 || a == 6)
        ans *= 2;
    if (b == 8 || b == 6)
        ans *= 2;
    if (c == 8 || c == 6)
        ans *= 2;
    if (d == 8 || d == 6)
        ans *= 2;

    cout << ans;
    return 0;
}
