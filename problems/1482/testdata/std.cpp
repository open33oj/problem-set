#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    if (a == b)
        cout << "same"; // 相等
    else if (a[0] == '-' && b[0] != '-')
        cout << "second"; // 一负一正
    else if (a[0] != '-' && b[0] == '-')
        cout << "first"; // 一正一负
    else if (a[0] != '-' && b[0] != '-')
    {
        // 两个正数
        if (a.length() < b.length() ||
            (a.length() == b.length() && a < b))
            cout << "second";
        else
            cout << "first";
    }
    else
    {
        // 两个负数
        if (a.length() < b.length() ||
            (a.length() == b.length() && a < b))
            cout << "first";
        else
            cout << "second";
    }
    return 0;
}