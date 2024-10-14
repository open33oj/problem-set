#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    assert(n % 2 == 1);
    if (n < 5)
        cout << "normal";
    else
        cout << "easy";
    return 0;
}