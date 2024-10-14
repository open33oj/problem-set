#include <bits/stdc++.h>
using namespace std;
int M;
int a[105][3];
int main()
{
    cin >> M;
    assert(1 <= M && M <= 100);
    cin >> a[0][1] >> a[0][2];
    assert(1 <= a[0][1] && a[0][1] <= 100);
    assert(1 <= a[0][2] && a[0][2] <= 100);
    for (int i = 1; i <= M; i++)
    {
        int v, op, loc, val;
        cin >> v >> op;
        assert(v < i);
        assert(1 <= op && op <= 2);
        a[i][1] = a[v][1];
        a[i][2] = a[v][2];
        if (op == 1)
        {
            cin >> loc >> val;
            assert(1 <= loc && loc <= 2);
            assert(1 <= val && val <= 100);
            a[i][loc] = val;
        }
        if (op == 2)
        {
            cin >> loc;
            assert(1 <= loc && loc <= 2);
            cout << a[i][loc] << "\n";
        }
    }

    return 0;
}