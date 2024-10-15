#include <bits/stdc++.h>
using namespace std;
string s;
string t;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> s >> t;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[i])
            continue;
        // 找找 t[i] 在哪儿
        int pos = -1;
        for (int j = i + 1; j <= t.size(); j++)
            if (s[j] == t[i])
            {
                pos = j;
                break;
            }
        if (pos == -1)
        {
            cout << "No";
            return 0;
        }
        // 对 i~pos 进行排序
        ans++;
        for (int j = i; j <= pos; j++)
            for (int k = j + 1; k <= pos; k++)
                if (s[k] < s[j])
                    swap(s[k], s[j]);
        if (s[i] != t[i])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}