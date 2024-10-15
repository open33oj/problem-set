#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
int a[60 + 5];
string s[60 + 5];

// huffman 建树
priority_queue<pair<int, int>> q;
int tot, l[60 * 2 + 5], r[60 * 2 + 5];

// 算一个 huffman 编码
int len[60 * 2 + 5], code[60 * 2 + 5];
void dfs(int x, int nowLen, int nowCode)
{
    if (x <= n)
    {
        len[x] = nowLen;
        code[x] = nowCode;
        return;
    }
    dfs(l[x], nowLen + 1, nowCode * 2);
    dfs(r[x], nowLen + 1, nowCode * 2 + 1);
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int inf_ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
        inf_ans += s[i].size() * a[i];
    }
    if (n == 1)
    {
        if (s[1].size() == 1)
            cout << "Yes\n"
                 << inf_ans << "\n";
        else
            cout << "No\n1\n";
        return 0;
    }

    tot = n;
    for (int i = 1; i <= n; i++)
        q.push(make_pair(-a[i], i));
    while (q.size() > 1)
    {
        tot++;
        pair<int, int> x = q.top();
        q.pop();
        pair<int, int> y = q.top();
        q.pop();
        q.push(make_pair(x.first + y.first, tot));
        l[tot] = x.second;
        r[tot] = y.second;
    }
    dfs(tot, 0, 0);

    // 检查
    bool flag = true;
    // 检查文章总长度
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans += a[i] * len[i];
    if (inf_ans != ans)
        flag = false;
    // 检查前缀问题
    sort(s + 1, s + n + 1);
    for (int i = 1; i <= n - 1; i++)
    {
        if (s[i] > s[i + 1])
            continue;
        bool now = true; // 是否为前缀
        for (int j = 0; j < s[i].size(); j++)
            if (s[i][j] != s[i + 1][j])
            {
                now = false;
                break;
            }
        if (now)
        {
            flag = false;
            break;
        }
    }

    // 输出
    if (flag)
    {
        cout << "Yes\n";
        cout << ans << "\n";
    }
    else
    {
        cout << "No\n";
        for (int i = 1; i <= n; i++)
        {
            for (int j = len[i] - 1; j >= 0; j--)
                cout << ((code[i] >> j) & 1);
            cout << "\n";
        }
    }
    return 0;
}