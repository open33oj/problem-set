#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;

    bool neg = false;
    if (a[0] == '-' && b[0] != '-')
    {
        cout << "second";
        return 0;
    }
    if (a[0] != '-' && b[0] == '-')
    {
        cout << "first";
        return 0;
    }
    if (a[0] == '-')
        neg = true;

    int aL = 0, bL = 0;
    while (aL != (int)a.size() - 1 &&
           (a[aL] == '-' || a[aL] == '0'))
        aL++;
    while (bL != (int)b.size() - 1 &&
           (b[bL] == '-' || b[bL] == '0'))
        bL++;

    int ans = 0; // 正数时的大小关系
    if ((int)a.size() - aL > (int)b.size() - bL)
        ans = 1;
    else if ((int)a.size() - aL < (int)b.size() - bL)
        ans = 2;
    else
    {
        for (int i = aL, j = bL; i < a.size(); i++, j++)
        {
            if (a[i] > b[j])
            {
                ans = 1;
                break;
            }
            if (a[i] < b[j])
            {
                ans = 2;
                break;
            }
        }
    }
    if (ans == 0)
        cout << "same";
    else if (ans == 1 && !neg ||
             ans == 2 && neg)
        cout << "first";
    else
        cout << "second";
    return 0;
}