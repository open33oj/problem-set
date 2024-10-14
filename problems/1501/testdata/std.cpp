#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt3 = 0;
    int cntE = 0;
    while (n > 0)
    {
        if (n % 10 == 3)
            cnt3++;
        else
            cntE++;
        n /= 10;
    }
    if (cnt3 > cntE)
        cout << "good";
    else
        cout << "bad";

    return 0;
}