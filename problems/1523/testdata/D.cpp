#include <bits/stdc++.h>
using namespace std;
char a[2][2];
string op;
string s;
string ans;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    a[0][0] = 'A', a[0][1] = 'B';
    a[1][0] = 'D', a[1][1] = 'C';
    cin >> op;
    cin >> s;
    for (int i = 0; i < op.size(); i++)
    {
        if (op[i] == 'L')
        {
            // 逆时针
            int temp = a[0][0];
            a[0][0] = a[0][1];
            a[0][1] = a[1][1];
            a[1][1] = a[1][0];
            a[1][0] = temp;
        }
        else if (op[i] == 'R')
        {
            // 顺时针
            int temp = a[0][0];
            a[0][0] = a[1][0];
            a[1][0] = a[1][1];
            a[1][1] = a[0][1];
            a[0][1] = temp;
        }
        if (s[i] == 'o')
            ans += a[0][0];
    }
    cout << ans << "\n";
    return 0;
}