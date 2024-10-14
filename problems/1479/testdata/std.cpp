#include <bits/stdc++.h>
using namespace std;
int n;
char g[35][35];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int main()
{
    cin >> n;
    memset(g, '#', sizeof(g));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> g[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (g[i][j] == '*')
            {
                for (int k = 0; k < 4; k++)
                {
                    int x = i;
                    int y = j;
                    while (g[x][y] != '#')
                    {
                        if (g[x][y] == '.')
                            g[x][y] = 'o';
                        x += dx[k];
                        y += dy[k];
                    }
                }
            }
    /*
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << g[i][j];
        cout << "\n";
    }
    */
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (g[i][j] == 'o' || g[i][j] == '*')
                ans++;
    cout << ans << "\n";
    return 0;
}