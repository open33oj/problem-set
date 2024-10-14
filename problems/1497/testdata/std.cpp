#include <bits/stdc++.h>
using namespace std;
// 1:33 2:157 3:184 ... 30:76 31:184
const int t = 30 - 3 + 1;
int main()
{
    long long x;
    cin >> x;
    if (x > 2)
    {
        long long partA = 2;
        long long partB = x - 2;
        partB = (partB - 1) % t + 1;
        x = partA + partB;
    }
    int seed = 33;
    for (int i = 1; i <= x; i++)
    {
        if (i == x)
            cout << seed << '\n';
        seed = seed * seed % 233;
    }
    return 0;
}
