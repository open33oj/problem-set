#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.size() == 1 ||
        s.size() == 2 && s == "10")
        cout << s;
    else
    {
        for (int i = (int)s.size() - 1; i >= 0; i--)
            cout << s[i];
    }
    return 0;
}