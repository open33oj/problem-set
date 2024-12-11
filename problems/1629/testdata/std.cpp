#include <bits/stdc++.h>
using namespace std;
int a, b, c, now;
bool f[100000 + 5];
int main()
{
    cin >> a >> b >> c;
    int cnt = 1;
    while (!f[a])
    {
        f[a] = true;
        a = a * 10;
        now = a / b;
        if (now == c)
        {
            cout << cnt;
            return 0;
        }
        a = a % b;
        cnt++;
    }
    cout << 0;
    return 0;
}