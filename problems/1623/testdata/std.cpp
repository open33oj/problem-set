#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x < 15)
        cout << 0;
    else if (x < 23)
        cout << 1;
    else
        cout << (x - 24) / 4 + 2;
    return 0;
}