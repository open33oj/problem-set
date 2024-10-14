#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a1, b1, a2, b2, a3, b3;
    int ans1, ans2, ans3;
    cin >> n;
    cin >> a1 >> b1;
    cin >> a2 >> b2;
    cin >> a3 >> b3;
    ans1 = ans2 = ans3 = n;
    if (n >= a1)
        ans1 -= b1;
    if (n >= a2)
        ans2 -= b2;
    if (n >= a3)
        ans3 -= b3;
    cout << min(ans1, min(ans2, ans3)) << "\n";
    return 0;
}