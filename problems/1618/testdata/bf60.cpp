#include <bits/stdc++.h>
using namespace std;
int n, m, T, k;
// 敌人战斗力，敌人胆量
int a[100000 + 5], b[100000 + 5];
// 返回从 pos 开始的游戏结局
int f(int pos)
{
    //cout << "====" << pos << "====\n";
    int health = n;
    int power = 0;
    while (pos <= m)
    {
        // 吓跑直接不战斗
        if (b[pos] <= power)
        {
            pos++;
            continue;
        }
        // 战斗结算
        health -= a[pos];
        power = b[pos];
        //cout << pos << ":" << health << "," << power << "\n";
        if (health <= 0)
            return pos;
        pos++;
    }
    return 0;
}
int main()
{
    cin >> n >> m >> T;
    for (int i = 1; i <= m; i++)
        cin >> a[i] >> b[i];
    for (int i = 1; i <= T; i++)
    {
        int k;
        cin >> k;
        cout << f(k) << "\n";
    }
    return 0;
}