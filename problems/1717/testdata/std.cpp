#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    int nn = sqrt(n);
    for (int i = 2; i <= nn; i++)
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    if (n != 1)
        cout << n;
    cout << "\n";

    return 0;
}