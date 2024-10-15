#include "testlib.h"

int a[4][3];
int x[4];
int score;
int main(int argc, char *argv[])
{
    registerTestlibCmd(argc, argv);
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 3; j++)
            a[i][j] = inf.readInt();
    for (int i = 0; i < 4; i++)
        x[i] = ouf.readInt(0,120);
    if(x[0]+x[1]+x[2]+x[3]!=120)
        quitf(_wa, "sum is not 120");
    score = ans.readInt();
    int now = 0;
    for (int i = 0; i < 4; i++)
    {
        if (x[i] >= a[i][2])
            now += 100;
        else if (x[i] >= a[i][1])
            now += 60;
        else if (x[i] >= a[i][0])
            now += 30;
    }
    if (now != score)
        quitf(_wa, "expected %d, found %d", score, now);
    quitf(_ok, "answer is %d", now);
}