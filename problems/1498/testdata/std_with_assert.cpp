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
    // check
    bool flag = true;
    for (int i = 0; i < s.size(); i++)
    {
        if ('0' <= s[i] && s[i] <= '9' ||
            s[i] == 'A' ||
            s[i] == 'J' ||
            s[i] == 'Q' ||
            s[i] == 'K')
        {
            if (s[i] == '1' &&
                (i + 1 == s.size() || s[i + 1] != '0'))
            {
                flag = false;
                break;
            }
        }
        else
        {
            flag = false;
            break;
        }
    }
    assert(flag);
    // ans
    f(0, s.size());
    return 0;
}