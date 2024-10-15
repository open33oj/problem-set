#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c;
    cin >> a >> b;
    c = a + b;
    if (c < -2147483648 || 2147483647 < c)
        cout << "long long";
    else
        cout << "int";
    return 0;
}