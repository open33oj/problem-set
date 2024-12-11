#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int last[30];
int main()
{
    cin >> n;
    cin >> s;
    s = "^" + s + "$";
    long long ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += last[s[i] - 'a'];
        last[s[i] - 'a'] = i;
    }
    cout << ans;
    return 0;
}