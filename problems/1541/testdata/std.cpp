#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long res = 0;
    for (int i = 1; i <= n; i++)
    {
        long long now = 1;
        for (int j = 1; j <= i; j++)
            now *= i;
        res += now;
    }
    cout << res;
    return 0;
}