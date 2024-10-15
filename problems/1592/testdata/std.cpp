#include <bits/stdc++.h>
using namespace std;
char x;
int ans;
int main()
{
    ans = 0;
    cin >> x;
    if (x == '1')
        ans += 16;
    cin >> x;
    if (x == '1')
        ans += 8;
    cin >> x;
    if (x == '1')
        ans += 4;
    cin >> x;
    if (x == '1')
        ans += 2;
    cin >> x;
    if (x == '1')
        ans += 1;
    cout << ans;
    return 0;
}