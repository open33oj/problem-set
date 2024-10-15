#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, T, k;
const int MAXN = 100000;
// 敌人战斗力，敌人胆量
int a[MAXN + 5], b[MAXN + 5];
// f[i][j] 记录 i 后面第 2^j 个是谁
// g[i][j] 记录 i 开始后面的 2^j 个敌人的战斗力之和
int f[MAXN + 5][25];
int g[MAXN + 5][25];
// 单调栈计算每个敌人下一个胆量大于他的在哪儿
stack<int> s;
void init()
{
    // 预处理 2^0 层
    for (int i = m; i >= 1; i--)
    {
        // 去掉栈顶小于等于 b[i] 的
        while (!s.empty() && b[s.top()] <= b[i])
            s.pop();
        // 现在的栈顶就是下一个大于 b[i] 的位置
        g[i][0] = a[i];
        if (s.empty())
            f[i][0] = 0;
        else
            f[i][0] = s.top();
        // 当前编号放入单调栈
        s.push(i);
    }
    // 处理 2^k 层
    for (int k = 1; k <= 20; k++)
        for (int i = 1; i <= m; i++)
        {
            int ii = f[i][k - 1]; // 往后 2^{k-1} 层的位置
            f[i][k] = f[ii][k - 1];
            g[i][k] = g[i][k - 1] + g[ii][k - 1];
        }
}
// 计算从 pos 位置开始，初始血量为 n，最终打败的是谁
int cal(int pos)
{
    int health = n;
    for (int k = 20; k >= 0; k--)
    {
        if (g[pos][k] < health)
        {
            health -= g[pos][k];
            pos = f[pos][k];
        }
    }
    return pos;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    cin >> m >> T;
    for (int i = 1; i <= m; i++)
        cin >> a[i] >> b[i];
    init(); // 预处理 f,g
    for (int i = 1; i <= T; i++)
    {
        int k;
        cin >> k;
        cout << cal(k) << "\n";
    }
    return 0;
}