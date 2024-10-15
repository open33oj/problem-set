#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;

    cin >> n;
    cin >> s;
    while (n--)
    {
        int l, r, m;
        cin >> l >> r >> m;
        long long now = 0;
        for (int i = l; i <= r; i++)
        {
            now = now * 10 + (s[i - 1] - '0');
            now = now % m;
        }
        cout << now << "\n";
    }

    return 0;
}