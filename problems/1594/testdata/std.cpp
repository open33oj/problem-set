#include <bits/stdc++.h>
using namespace std;
string s;
int len, a[10];
int main()
{
    cin >> s;
    len = (int)s.size() - 2;
    for (int i = 0; i < len; i++)
        a[i] = s[(int)s.size() - 1 - i] - '0';
    cout << "0.";
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 0; j < len; j++)
            a[j] *= 2;
        for (int j = 0; j < len; j++)
        {
            a[j + 1] += a[j] / 10;
            a[j] %= 10;
        }
        cout << a[len];
        a[len] = 0;
    }
    return 0;
}