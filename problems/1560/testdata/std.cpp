#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int i = a / 100 % 10;
    int j = a / 10 % 10;
    int k = a % 10;
    int x = b / 100 % 10;
    int y = b / 10 % 10;
    int z = b % 10;

    if (x == i)
        cout << '2';
    else if (x == j || x == k)
        cout << '1';
    else
        cout << '0';

    if (y == j)
        cout << '2';
    else if (y == i || y == k)
        cout << '1';
    else
        cout << '0';

    if (z == k)
        cout << '2';
    else if (z == i || z == j)
        cout << '1';
    else
        cout << '0';
    return 0;
}