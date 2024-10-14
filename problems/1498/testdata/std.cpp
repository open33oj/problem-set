#include <bits/stdc++.h>
using namespace std;
string s;
void f(int l, int r)
{
    if (l > r)
        return;
    if (s[l] == '1')
    {
        f(l + 2, r);
        cout << "10";
    }
    else
    {
        f(l + 1, r);
        cout << s[l];
    }
}
int main()
{
    cin >> s;
    f(0, (int)s.size() - 1);
    return 0;
}