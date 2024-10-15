#include <bits/stdc++.h>
using namespace std;
int n;
// 年份、月份、日期、星期几
int yy, mm, dd, ww;
int main()
{
    int n;
    cin >> n;
    // 一天天模拟
    yy = 2024;
    mm = 4;
    dd = 4;
    ww = 4;
    while (n)
    {
        if (yy % 10 == 4 && mm == 4 && dd == 4 && ww == 4)
        {
            cout << yy << " " << mm << " " << dd << "\n";
            n--;
        }
        // 这个月的天数
        int maxDay;
        if (mm == 4 || mm == 6 || mm == 11 || mm == 9)
            maxDay = 30;
        else if (mm != 2)
            maxDay = 31;
        else if (yy % 4 == 0 && yy % 100 != 0 || yy % 400 == 0)
            maxDay = 29;
        else
            maxDay = 28;
        // 过一天
        dd++;
        if (dd > maxDay)
        {
            mm++;
            dd = 1;
        }
        if (mm > 12)
        {
            yy++;
            mm = 1;
        }
        ww++;
        if (ww > 7)
            ww = 1;
    }
    return 0;
}