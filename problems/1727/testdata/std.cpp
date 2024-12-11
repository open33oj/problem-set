#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, a, b;
    cin >> n >> a >> b;
    long long pos = a * b % n + 1;
    for (int i = pos; i <= n; i++)
        cout << i << " ";
    for (int i = 1; i <= pos - 1; i++)
        cout << i << " ";
    return 0;
}