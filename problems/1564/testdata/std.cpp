#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n -= 10;
    n /= 2;
    int hh, mm;
    hh = 8 + n / 60;
    mm = n % 60;
    if (hh < 10)
        cout << "0";
    cout << hh;
    cout << ":";
    if (mm < 10)
        cout << "0";
    cout << mm;
    return 0;
}