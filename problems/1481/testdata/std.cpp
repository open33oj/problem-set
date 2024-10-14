#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    for (int i = 1;; i++)
    {
        if (1LL * i * i * i > n)
        {
            cout << i - 1 << " " << i << "\n";
            break;
        }
    }
    return 0;
}