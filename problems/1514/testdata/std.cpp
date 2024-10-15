#include <bits/stdc++.h>
using namespace std;
struct C
{
    char c;
    int cnt;
};
int tot = 0;
C a[256];
bool cmp(C a, C b)
{
    if (a.cnt != b.cnt)
        return a.cnt > b.cnt;
    return a.c < b.c;
}
int main()
{
    string s;
    getline(cin, s);
    int cnt[300] = {};
    for (int i = 0; i < s.size(); i++)
        cnt[s[i]]++;
    for (int i = 0; i < 256; i++)
        if (cnt[i] > 0 && (char)i != ' ')
        {
            tot++;
            a[tot] = (C){(char)i, cnt[i]};
        }
    sort(a + 1, a + tot + 1, cmp);
    for (int i = 1; i <= tot; i++)
    {
        cout << a[i].c;
        //cout << "(" << a[i].cnt << ")";
    }
    //cout << "#";
    return 0;
}
// I have a apple, I have a pen, Uh, applepen!
