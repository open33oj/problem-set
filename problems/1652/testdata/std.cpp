#include <bits/stdc++.h>
using namespace std;
int n;
int a, b, c, d;
int A, B, C, D;
string s;
int main()
{
    cin >> n;
    cin >> a >> b >> c >> d;
    cin >> s;
    A = B = C = D = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == 'A')
            A++;
        else if (s[i] == 'B')
            B++;
        else if (s[i] == 'C')
            C++;
        else if (s[i] == 'D')
            D++;
    cout << min(a, A) + min(b, B) + min(c, C) + min(d, D);
    return 0;
}