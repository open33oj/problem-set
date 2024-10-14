#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    if (x > y)
    {
        cout << (long long)n * (x - y);
    }
    else
    {
        cout << (long long)n * (y - x);
    }
    return 0;
}