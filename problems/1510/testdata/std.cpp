#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    assert(n == s.size());
    int one = 0;
    int half = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'o')
            one++;
        if (s[i] == '~')
            half++;
    }
    one += half / 2;
    half %= 2;
    cout << one;
    if (half == 1)
        cout << ".5";
    return 0;
}