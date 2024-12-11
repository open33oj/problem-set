#include <bits/stdc++.h>
using namespace std;
int num[256];
string t1 = "ADOPQRabdeopq469";
string t2 = "Bg08";
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < 256; i++)
        num[i] = 0;
    for (int i = 0; i < t1.size(); i++)
        num[t1[i]] = 1;
    for (int i = 0; i < t2.size(); i++)
        num[t2[i]] = 2;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
        ans += num[s[i]];
    cout << ans;
    return 0;
}