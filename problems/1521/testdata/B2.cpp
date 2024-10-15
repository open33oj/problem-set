#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a = n / 9;
    long long b = n % 9;
    cout << (a * 45) + (1 + b) * b / 2;
    return 0;
}
