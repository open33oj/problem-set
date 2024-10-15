#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s;
    t = "";
    int l = 0;
    int r = (int)s.size() - 1;
    while (l <= r)
    {
        if (l <= r)
        {
            t += s[l];
            l++;
        }
        if (l <= r)
        {
            t += s[r];
            r--;
        }
    }
    cout << t;
    return 0;
}