#include <bits/stdc++.h>
using namespace std;
int n3[10];
string s;
void f(int k, int pos)
{
    if (k == 0)
    {
        s[pos] = '#';
        return;
    }
    f(k - 1, pos);
    f(k - 1, pos + 2 * n3[k - 1]);
}
int main()
{
    int n;
    cin >> n;

    n3[0] = 1;
    for (int i = 1; i <= n; i++)
        n3[i] = n3[i - 1] * 3;
    s.resize(n3[n]);
    for (int i = 0; i < s.size(); i++)
        s[i] = '.';

    f(n, 0);

    cout << s;
    return 0;
}