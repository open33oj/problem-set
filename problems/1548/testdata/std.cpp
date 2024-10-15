#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = n / 100;
    int b = n / 10 % 10;
    int c = n % 10;
    if (a > b)
        swap(a, b);
    if (a > c)
        swap(a, c);
    if (b > c)
        swap(b, c);
    cout << a * 100 + b * 10 + c;
    return 0;
}