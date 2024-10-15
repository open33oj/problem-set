#include <bits/stdc++.h>
using namespace std;
string a, b;
int aL, aLen;
int bL, bLen;
int main()
{
    cin >> a >> b;
    aL = 0;
    while (aL < (int)a.size() - 1 && a[aL] == '0')
        aL++;
    bL = 0;
    while (bL < (int)b.size() - 1 && b[bL] == '0')
        bL++;
    aLen = (int)a.size() - aL + 1;
    bLen = (int)b.size() - bL + 1;
    if (aLen > bLen)
    {
        cout << "first";
        return 0;
    }
    if (bLen > aLen)
    {
        cout << "second";
        return 0;
    }
    for (int i = aL, j = bL; i < a.size(); i++, j++)
    {
        if (a[i] > b[j])
        {
            cout << "first";
            return 0;
        }
        if (b[j] > a[i])
        {
            cout << "second";
            return 0;
        }
    }
    cout << "same";
    return 0;
}