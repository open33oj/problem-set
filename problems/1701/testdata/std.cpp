#include <bits/stdc++.h>
using namespace std;
int main()
{
    char D1, D2, K1, K2;
    cin >> D1 >> D2 >> K1 >> K2;
    int d1, d2, k1, k2;

    if (D1 == 'D')
        d1 = 4;
    else if (D1 == 'C')
        d1 = 3;
    else if (D1 == 'H')
        d1 = 2;
    else if (D1 == 'S')
        d1 = 1;

    if (D2 == 'A')
        d2 = 1;
    else if (D2 == 'T')
        d2 = 10;
    else if (D2 == 'J')
        d2 = 11;
    else if (D2 == 'Q')
        d2 = 12;
    else if (D2 == 'K')
        d2 = 13;
    else
        d2 = D2 - '0';

    if (K1 == 'D')
        k1 = 4;
    else if (K1 == 'C')
        k1 = 3;
    else if (K1 == 'H')
        k1 = 2;
    else if (K1 == 'S')
        k1 = 1;

    if (K2 == 'A')
        k2 = 1;
    else if (K2 == 'T')
        k2 = 10;
    else if (K2 == 'J')
        k2 = 11;
    else if (K2 == 'Q')
        k2 = 12;
    else if (K2 == 'K')
        k2 = 13;
    else
        k2 = K2 - '0';

    if (d1 * 14 + d2 > k1 * 14 + k2)
        cout << "33DAI";
    else
        cout << "Kitten";

    return 0;
}