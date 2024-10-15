#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b;
    char x, y;
    cin >> a >> x >> y;
    if (y == 'i')
        b = 1024;
    else
        b = 1000;
    if (x == 'K')
        cout << a * b << "\n";
    else if (x == 'M')
        cout << a * b * b << "\n";
    else if (x == 'G')
        cout << a * b * b * b << "\n";
    return 0;
}