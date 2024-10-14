#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    cin >> x;
    assert(1 <= x && x <= 100);
    int seed = 33;
    for (int i = 1; i <= x; i++)
    {
        if (i == x)
            cout << seed << '\n';
        seed = seed * seed % 233;
    }
    return 0;
}