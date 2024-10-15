#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int x = 1;; x++)
    {
        if (n + x == min(756, m + x / 4))
        {
            cout << n + x;
            return 0;
        }
    }
    return 0;
}