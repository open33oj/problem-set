#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n < 5)
        cout << "normal";
    else if (n % 2 == 1)
        cout << "easy";
    else
        cout << "difficult";
    return 0;
}