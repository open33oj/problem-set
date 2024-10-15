#include <bits/stdc++.h>
using namespace std;
int n, m;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        if (m > 0)
        {
            if (i % 3 == 1 || i % 3 == 2)
            {
                cout << 1;
                m--;
            }
            else
                cout << 0;
        }
        else
            cout << 0;
    }
    return 0;
}