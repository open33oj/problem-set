#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    int n, m;
    cin >> s;
    cin >> n >> m;
    t = "";
    while (t.length() < n + m - 1)
        t += s;
    for (int i = n; i <= n + m - 1; i++)
        cout << t[i - 1];
    return 0;
}