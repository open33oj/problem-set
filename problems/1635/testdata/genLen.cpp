#include <bits/stdc++.h>
using namespace std;
int n, k;
int len;
int main()
{
    cin >> n >> k;
    // (len*2+1)*k >= n
    // len >= (n/k-1)/2
    // len >= (n-k)/(k*2)
    len = (n - k) / (k * 2);
    if ((n - k) % (k * 2) != 0)
        len++;
    cout << len;
    return 0;
}