#include <bits/stdc++.h>
using namespace std;
int n, k, x;
int main()
{
    cin >> n;
    k = (n - 1) / 2;
    x = (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (abs(i - x) + abs(j - x) == k)
                cout << "*";
            else
                cout << ".";
        }
        cout << "\n";
    }
    return 0;
}