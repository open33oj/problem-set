#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int ans = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '\\')
            ans++;
    cout << ans + 1 << "\n";
    return 0;
}