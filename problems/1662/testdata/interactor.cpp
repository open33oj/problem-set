#include "testlib.h"
#include <iostream>

using namespace std;
const int N = 100000;
int n;
int a[N + 5];
int check(int l, int r)
{
    int max1, pos1;
    int max2, pos2;
    max1 = max2 = 0;
    for (int i = l; i <= r; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            pos2 = pos1;
            max1 = a[i];
            pos1 = i;
        }
        else if (a[i] > max2)
        {
            max2 = a[i];
            pos2 = i;
        }
    }
    return pos2;
}
int main(int argc, char *argv[])
{
    registerInteraction(argc, argv);
    n = inf.readInt();
    for (int i = 1; i <= n; i++)
        a[i] = inf.readInt();
    cout << n << "\n";
    cout.flush();
    char op;
    int l, r, x;
    int cnt = 0;
    while (1)
    {
        cin >> op;
        if (op == '?')
        {
            cnt++;
            if (cnt > 20)
                quitf(_wa, "Too Many Query!");
            cin >> l >> r;
            if (!(1 <= l && l < r && r <= n))
                quitf(_wa, "bad query");
            cout << check(l, r) << "\n";
            cout.flush();
        }
        else if (op == '!')
        {
            cin >> x;
            if (!(a[x] == n))
                quitf(_wa, "wrong pos");
            quitf(_ok, "ok");
        }
        else
            quitf(_wa, "wrong query");
    }
}
