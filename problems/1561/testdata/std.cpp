#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans = 0;
    char x, y, z;

    cout << 123 << "\n";
    cout.flush();
    cin >> x >> y >> z;
    if (x == '2' && y == '2' && z == '2')
        return 0;
    if (x != '0')
        ans = ans * 10 + 1;
    if (y != '0')
        ans = ans * 10 + 2;
    if (z != '0')
        ans = ans * 10 + 3;

    cout << 456 << "\n";
    cout.flush();
    cin >> x >> y >> z;
    if (x == '2' && y == '2' && z == '2')
        return 0;
    if (x != '0')
        ans = ans * 10 + 4;
    if (y != '0')
        ans = ans * 10 + 5;
    if (z != '0')
        ans = ans * 10 + 6;

    cout << 789 << "\n";
    cout.flush();
    cin >> x >> y >> z;
    if (x == '2' && y == '2' && z == '2')
        return 0;
    if (x != '0')
        ans = ans * 10 + 7;
    if (y != '0')
        ans = ans * 10 + 8;
    if (z != '0')
        ans = ans * 10 + 9;

    int a = ans / 100 % 10;
    int b = ans / 10 % 10;
    int c = ans % 10;
    cout << a << b << c << "\n";
    cout.flush();
    if (x == '2' && y == '2' && z == '2')
        return 0;
    cout << a << c << b << "\n";
    cout.flush();
    if (x == '2' && y == '2' && z == '2')
        return 0;
    cout << b << a << c << "\n";
    cout.flush();
    if (x == '2' && y == '2' && z == '2')
        return 0;
    cout << b << c << a << "\n";
    cout.flush();
    if (x == '2' && y == '2' && z == '2')
        return 0;
    cout << c << a << b << "\n";
    cout.flush();
    if (x == '2' && y == '2' && z == '2')
        return 0;
    cout << c << b << a << "\n";
    cout.flush();
    if (x == '2' && y == '2' && z == '2')
        return 0;
    return 0;
}