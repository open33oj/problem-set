#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a, b;
    cin >> a >> b;
    int ans = (a - 'A') + (b - 'A');
    if (ans < 10)
        cout << (char)('A' + ans);
    else
        cout << (char)('A' + ans / 10)
             << (char)('A' + ans % 10);
    return 0;
}