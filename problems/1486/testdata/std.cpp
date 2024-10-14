#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string last, now;
    last = "";
    while (cin >> now)
    {
        if (now == "am" || now == "are" || now == "is")
        {
            if (last == "i")
                now = "am";
            else if (last == "you")
                now = "are";
            else
                now = "is";
        }
        cout << now << " ";
        last = now;
    }

    return 0;
}