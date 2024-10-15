#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long i, num;
    for (i = 1;; i++)
    {
        // i*i+1 对应的 n
        num = i * i + 1 - i;
        if (num > n)
            break;
    }
    i--;
    num = i * i + 1 - i;
    cout << i * i + 1 + (n - num);
    return 0;
}