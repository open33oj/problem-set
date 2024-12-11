#include <bits/stdc++.h>
using namespace std;
int num[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int n;
int a[10];
int main()
{
    cin >> n;
    for (int i = 1; i <= 9; i++)
        a[i] = (n + (num[i] - 1)) / num[i];
    int ans = 1;
    for (int i = 2; i <= 9; i++)
        if (a[i] < a[ans])
            ans = i;
    for (int i = 1; i <= a[ans]; i++)
        cout << ans;
    return 0;
}