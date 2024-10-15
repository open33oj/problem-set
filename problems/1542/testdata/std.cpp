#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    for (int i = 1; i <= 4; i++)
        if (s[i] != s[i - 1] + 1)
        {
            cout << "No\n";
            return 0;
        }
    cout << "Yes\n";
    return 0;
}