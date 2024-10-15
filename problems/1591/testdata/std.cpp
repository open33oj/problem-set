#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000;
int n;
int a[MAXN + 5];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    bool flag = true;
    while (flag)
    {
        flag = false;
        for (int i = 1; i <= n - 1; i++)
        {
            cout << "cmp,a[" << i << "],a[" << i + 1 << "]\n";
            if (a[i] > a[i + 1])
            {
                cout << "swp,a[" << i << "],a[" << i + 1 << "]\n";
                swap(a[i], a[i + 1]);
                flag = true;
            }
        }
    }
    /*
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    */
    return 0;
}
