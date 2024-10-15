#include <bits/stdc++.h>
using namespace std;
int rnk[1005];
int boyTot = 0, boy[1005];
int girlTot = 0, girl[1005];
bool cmp(int a, int b)
{
    return rnk[a] < rnk[b];
}
int main()
{
    int n;
    string s;
    int a[1005];
    cin >> n;
    cin >> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        rnk[a[i]] = i;
        if (s[i - 1] == 'm')
            boy[++boyTot] = i;
        else
            girl[++girlTot] = i;
    }
    sort(boy + 1, boy + boyTot + 1, cmp);
    sort(girl + 1, girl + girlTot + 1, cmp);
    for (int i = 1; i <= boyTot; i++)
        cout << boy[i] << " ";
    cout << "\n";
    for (int i = 1; i <= girlTot; i++)
        cout << girl[i] << " ";
    cout << "\n";
    return 0;
}