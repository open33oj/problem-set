#include <bits/stdc++.h>
using namespace std;
string t = "olz34sb78q";
int a;
int main()
{
    cin >> a;
    bool zero = true;
    for (int i = 1000000000; i >= 1; i /= 10)
    {
        int now = a / i % 10;
        if (now > 0 || !zero)
        {
            cout << t[a / i % 10];
            zero = false;
        }
    }
    return 0;
}