#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1, a2, a3, a4;
    int x1, x2, x3, x4;
    int b1, b2, b3, b4;
    int y1, y2, y3, y4;
    cin >> a1 >> a2 >> a3 >> a4;
    cin >> x1 >> x2 >> x3 >> x4;
    cin >> b1 >> b2 >> b3 >> b4;
    cin >> y1 >> y2 >> y3 >> y4;
    int a = a1 + a2 + a3 + a4;
    int x = x1 + x2 + x3 + x4;
    int b = b1 + b2 + b3 + b4;
    int y = y1 + y2 + y3 + y4;
    if (x * b > y * a)
        cout << "A";
    else if (x * b < y * a)
        cout << "B";
    else
        cout << "33DAI";
    return 0;
}