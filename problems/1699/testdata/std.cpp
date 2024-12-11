#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main()
{
    cin >> n;
    cin >> s;
    int ans = 0;
    for (int i = 1; i <= n - 1; i++)
        if (s[i] == '3' && s[i - 1] == '3')
        {
            ans++;
            s[i] = s[i - 1] = '0';
        }
    cout << ans;
    return 0;
}