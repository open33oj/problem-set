#include <bits/stdc++.h>
using namespace std;
int num[5];
bool check()
{
    sort(num + 1, num + 5);
    for (int i = 1; i <= 4; i++)
        if (num[i] != i)
            return false;
    return true;
}
int a[5][5];
int main()
{
    for (int i = 1; i <= 4; i++)
        for (int j = 1; j <= 4; j++)
            cin >> a[i][j];
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
            num[j] = a[i][j];
        if (!check())
        {
            cout << "no\n";
            return 0;
        }
        for (int j = 1; j <= 4; j++)
            num[j] = a[j][i];
        if (!check())
        {
            cout << "no\n";
            return 0;
        }
    }
    // 左上
    num[1] = a[1][1], num[2] = a[1][2];
    num[3] = a[2][1], num[4] = a[2][2];
    if (!check())
    {
        cout << "no\n";
        return 0;
    }
    // 右上
    num[1] = a[1][3], num[2] = a[1][4];
    num[3] = a[2][3], num[4] = a[2][4];
    if (!check())
    {
        cout << "no\n";
        return 0;
    }
    // 左下
    num[1] = a[3][1], num[2] = a[3][2];
    num[3] = a[4][1], num[4] = a[4][2];
    if (!check())
    {
        cout << "no\n";
        return 0;
    }
    // 右下
    num[1] = a[3][3], num[2] = a[3][4];
    num[3] = a[4][3], num[4] = a[4][4];
    if (!check())
    {
        cout << "no\n";
        return 0;
    }
    cout << "yes\n";
    return 0;
}