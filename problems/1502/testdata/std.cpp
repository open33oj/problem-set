#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool flag = true; // 读
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '3')
        {
            flag = false;
            break;
        }
        else
            sum += s[i] - '0';
    if (sum % 3 == 0)
        flag = false;
    if (flag)
        cout << s;
    else
        cout << "guo";
    return 0;
}
