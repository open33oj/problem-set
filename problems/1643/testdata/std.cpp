#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int gen(string &s)
{
    int res = 0;
    for (int i = 0; i < s.size(); i++)
        res = res * 10 + s[i] - '0';
    return res;
}
bool p(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> s;
    sort(s.begin(), s.end());
    do
    {
        if (p(gen(s)))
        {
            cout << s << "\n";
            return 0;
        }
    } while (next_permutation(s.begin(), s.end()));
    cout << "-1\n";
    return 0;
}