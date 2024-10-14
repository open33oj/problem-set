#include <bits/stdc++.h>
using namespace std;
int M;
int a[105][3];
int main()
{
    cin >> M;
    cin >> a[0][1] >> a[0][2];
    for (int i = 1; i <= M; i++)
    {
        int v, op, loc, val;
        cin >> v >> op;
        a[i][1] = a[v][1];
        a[i][2] = a[v][2];
        if (op == 1)
        {
            cin >> loc >> val;
            a[i][loc] = val;
        }
        if (op == 2)
        {
            cin >> loc;
            cout << a[i][loc] << "\n";
        }
    }

    return 0;
}