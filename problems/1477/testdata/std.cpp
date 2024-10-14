#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    long long ab, ba;
    ab = 1;
    for (int i = 1; i <= b; i++)
        ab *= a;
    ba = 1;
    for (int i = 1; i <= a; i++)
        ba *= b;
    if (ab > ba)
        cout << "first";
    else if (ab < ba)
        cout << "second";
    else
        cout << "same";
    return 0;
}