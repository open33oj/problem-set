#include <bits/stdc++.h>
using namespace std;
string s, t;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    getline(cin, s);
    t = "";
    for (int i = 0; i < s.size(); i++)
    {
        if ('a' <= s[i] && s[i] <= 'z' ||
            'A' <= s[i] && s[i] <= 'Z')
            t += s[i];
        else
        {
            if (t != "")
            {
                if (t.size() <= 2)
                    cout << t;
                else
                    cout << t[0] << t.size() - 2 << t[t.size() - 1];
            }
            cout << s[i];
            t = "";
        }
    }
    if (t != "")
    {
        if (t.size() <= 2)
            cout << t;
        else
            cout << t[0] << t.size() - 2 << t[t.size() - 1];
    }
    return 0;
}