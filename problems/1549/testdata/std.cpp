#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    for (int i = 0; i <= 1000; i++)
        for (int j = 0; j <= 1000 - i; j++)
            for (int k = 0; k <= 1000 - i - j; k++)
            {
                int l = 1000 - i - j - k;
                if (d != 0 && l % d == 0 && i * a + j * b + k * c + l / d == 1000)
                {
                    cout << i << " " << j << " " << k << " " << l;
                    return 0;
                }
            }
    cout << "-i";
    return 0;
}