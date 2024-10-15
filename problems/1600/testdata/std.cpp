#include <bits/stdc++.h>
using namespace std;
string month[13] = {
    "",
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"};
string new_month[13];
string in_month;
int main()
{
    for (int i = 1; i <= 12; i++)
        new_month[i] = month[i];
    sort(new_month + 1, new_month + 12 + 1);
    cin >> in_month;
    for (int i = 1; i <= 12; i++)
        if (in_month == new_month[i])
            cout << month[i];
    return 0;
}