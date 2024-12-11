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
    int pos = 1;
    for (int i = 1; i <= k; i++)
    {
        //           len         len
        // pre_pos xxxxxxx pos xxxxxxx
        pos = min(n, pos + len);
        cout << pos << "\n";
        pos = min(n, pos + len + 1);
    }
    return 0;
}