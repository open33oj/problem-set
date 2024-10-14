#include <bits/stdc++.h>
using namespace std;
int n, x, y;
int a1, a2, a3, a4;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> x >> y;
    cin >> a1 >> a2 >> a3 >> a4;
    int plan1 = (n / 10) * 4 * x;
    int plan2 = (n / 2) * y;
    int plan3 = (a1 + a2 + a3 + a4) * n;
    //cout << plan1 << " " << plan2 << " " << plan3 << "\n";
    if (plan1 > plan2 && plan1 > plan3)
    {
        cout << plan1 << "\n";
    }
    else if (plan2 > plan3)
    {
        cout << plan2 << "\n";
    }
    else
    {
        cout << plan3 << "\n";
    }
    return 0;
}