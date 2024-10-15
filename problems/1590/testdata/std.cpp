#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    cin >> s;
    int now, all;
    now = all = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'o')
            now++;
        else
            break;
    }
    for (int i = 0; i < s.size(); i++)
        if (s[i] == 'o')
            all++;
    cout << now << " " << all;
    return 0;
}