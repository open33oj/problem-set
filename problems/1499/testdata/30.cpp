#include <bits/stdc++.h>
using namespace std;
int M;
int a[1][3];
int main()
{
    cin >> M;
    cin >> a[0][1] >> a[0][2];
    for (int i = 1; i <= M; i++)
    {
        int v, op, loc, val;
        cin >> v >> op;
        assert(op == 2);
        cin >> loc;
        cout << a[0][loc] << "\n";
    }

    return 0;
}