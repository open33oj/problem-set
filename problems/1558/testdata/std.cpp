#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    cin >> s;
    int num = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '.')
            break;
        else
            num++;
    cout << s[0];
    if (s.size() > 1)
        cout << ".";
    for (int i = 1; i < s.size(); i++)
        if (s[i] != '.')
            cout << s[i];
    cout << "*10^" << num - 1 << "\n";
    return 0;
}