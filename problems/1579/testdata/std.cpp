#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    cin >> s;
    if (s[0] == '0')
    {
        cout << s;
        return 0;
    }
    for (int i = 1; i <= (int)s.size() - 1; i++)
    {
        if (s[i] == '0')
            s[i] = '1';
        else
            s[i] = '0';
    }
    int add = 1; // 进位
    for (int i = (int)s.size() - 1; i >= 0; i--)
    {
        int num = s[i] - '0' + add;
        add = num / 2;
        num = num % 2;
        s[i] = '0' + num;
    }
    cout << s;
    return 0;
}