#include <bits/stdc++.h>
using namespace std;
int n;
unsigned long long m;
int main()
{
    cin >> n >> m;
    m = m * 1024 * 512; // 一半的空间Byte
    unsigned long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int ri;
        cin >> ri;
        unsigned long long now = 1;
        for (int j = 1; j <= ri; j++)
        {
            unsigned long long aij;
            cin >> aij;
            now = now * aij;
        }
        sum += now * 4;
    }
    if (sum <= m)
        cout << "No\n";
    else
        cout << "Yes\n";

    return 0;
}