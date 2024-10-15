#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a1, a2, a3;
    int b1, b2, b3;
    int c1, c2, c3;
    int d1, d2, d3;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> c1 >> c2 >> c3;
    cin >> d1 >> d2 >> d3;
    int x1=120, x2=0, x3=0, x4=0, ans = 0;
    for (int ia = 0; ia <= 120; ia++)
        for (int ib = 0; ib <= 120 - ia; ib++)
            for (int ic = 0; ic <= 120 - ia - ib; ic++)
            {
                int id = 120 - ia - ib - ic;
                int now = 0;

                if (ia >= a3)
                    now += 100;
                else if (ia >= a2)
                    now += 60;
                else if (ia >= a1)
                    now += 30;

                if (ib >= b3)
                    now += 100;
                else if (ib >= b2)
                    now += 60;
                else if (ib >= b1)
                    now += 30;

                if (ic >= c3)
                    now += 100;
                else if (ic >= c2)
                    now += 60;
                else if (ic >= c1)
                    now += 30;

                if (id >= d3)
                    now += 100;
                else if (id >= d2)
                    now += 60;
                else if (id >= d1)
                    now += 30;

                if (now > ans)
                {
                    ans = now;
                    x1 = ia;
                    x2 = ib;
                    x3 = ic;
                    x4 = id;
                }
            }
    cout << ans << "\n";
    cout << x1 << " " << x2 << " " << x3 << " " << x4 << "\n";
    return 0;
}