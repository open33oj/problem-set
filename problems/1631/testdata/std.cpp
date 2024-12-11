#include <bits/stdc++.h>
using namespace std;
int a[5][5];
int score[5];
int main()
{
    for (int i = 1; i <= 4; i++)
        for (int j = 1; j <= 4; j++)
            cin >> a[i][j];
    for (int no = 1; no <= 4; no++)
    {
        for (int i = 1; i <= 4; i++)
            score[i] = i * 10;
        score[no] = 0;
        if (score[1] == 0 && a[1][2] == 1)
            score[2] = 0;
        if (score[1] == 0 && a[1][3] == 1)
            score[3] = 0;
        if (score[1] == 0 && a[1][4] == 1)
            score[4] = 0;

        if (score[2] == 0 && a[2][3] == 1)
            score[3] = 0;
        if (score[2] == 0 && a[2][4] == 1)
            score[4] = 0;

        if (score[3] == 0 && a[3][4] == 1)
            score[4] = 0;

        cout << score[1] + score[2] + score[3] + score[4] << " ";
    }
    return 0;
}