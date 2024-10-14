#include <bits/stdc++.h>
using namespace std;
int M;
int a[105], temp;
int main()
{
    cin >> M;
    cin >> a[0] >> temp;
    for (int i = 1; i <= M; i++)
    {
        int v, op, loc, val;
        cin >> v >> op;
        a[i] = a[v];
        if (op == 1)
        {
            cin >> loc >> val;
            assert(loc == 1);
            a[i] = val;
        }
        if (op == 2)
        {
            cin >> loc;
            assert(loc == 1);
            cout << a[i] << "\n";
        }
    }
    return 0;
}