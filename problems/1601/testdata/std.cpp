#include <bits/stdc++.h>
using namespace std;
int n, m;
string nam[1005];
int score[1005][5];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> nam[i];
    sort(nam + 1, nam + n + 1);
    while (m--)
    {
        int op, a, b;
        string s;
        cin >> op;
        if (op == 1)
        {
            cin >> s >> a >> b;
            for (int i = 1; i <= n; i++)
                if (s == nam[i])
                    score[i][a] = b;
        }
        if (op == 2)
        {
            s = nam[1];
            a = score[1][1] + score[1][2] +
                score[1][3] + score[1][4];
            for (int i = 2; i <= n; i++)
            {
                if (score[i][1] + score[i][2] +
                        score[i][3] + score[i][4] >
                    a)
                {
                    s = nam[i];
                    a = score[i][1] + score[i][2] +
                        score[i][3] + score[i][4];
                }
            }
            cout << s << "\n";
        }
    }
    return 0;
}