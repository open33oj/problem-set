#include <bits/stdc++.h>
using namespace std;
const int MAXN = 200'000;
const int MAXAI = 1'000'000'000;

int n;
int a[MAXN + 5];

// f[i]: 以 a[i] 结尾的 LIS 长度
int f[MAXN + 5];
// g[len]: 当前长度为 len 的 LIS 最小结尾的元素下标
int g[MAXN + 5];
// pre[i]: 以 a[i] 结尾的 LIS 的上一个元素下标
int pre[MAXN + 5];
// 方案，实际上也可以递归输出
vector<int> plan;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int ansI = 1;
    for (int i = 1; i <= n; i++)
        g[i] = 0;
    a[0] = MAXAI + 1;
    for (int i = 1; i <= n; i++)
    {
        int l = 1;
        int r = n;
        int len;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[g[mid]] >= a[i])
            {
                len = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        f[i] = len;
        g[len] = i;
        pre[i] = g[len - 1];
        if (f[i] > f[ansI])
            ansI = i;
    }
    cout << f[ansI] << "\n";
    while (ansI)
    {
        plan.push_back(a[ansI]);
        ansI = pre[ansI];
    }
    for (int i = (int)plan.size() - 1; i >= 0; i--)
        cout << plan[i] << " ";
    return 0;
}
