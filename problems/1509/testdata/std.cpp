#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ai, sum;
    cin >> n;
    sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> ai;
        sum += ai;
        if (sum >= 100)
        {
            cout << i;
            break;
        }
    }
    return 0;
}