#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[])
{
    registerTestlibCmd(argc, argv);
    string r = inf.readLine();
    int i = 0, j = 0, n = 0, m = 0;
    int now = 1;
    while ('0' <= r[now] && r[now] <= '9')
    {
        i = i * 10 + r[now] - '0';
        now++;
    }
    now += 2;
    while ('0' <= r[now] && r[now] <= '9')
    {
        n = n * 10 + r[now] - '0';
        now++;
    }
    now += 2;
    while ('0' <= r[now] && r[now] <= '9')
    {
        j = j * 10 + r[now] - '0';
        now++;
    }
    now += 2;
    while ('0' <= r[now] && r[now] <= '9')
    {
        m = m * 10 + r[now] - '0';
        now++;
    }
    string s = ans.readLine();
    string ss = ouf.readLine();
    if (s != ss)
        quitf(_wa, "s!=ss");
    string x = ans.readWord();
    if (x == "No") 
    {
        string xx = ouf.readWord();
        if (x != xx)
            quitf(_wa, "x!=xx");
        else
            quitf(_ok, "AC1!");
    }
    else
    {
        int xx = ouf.readInt();
        if (i * xx + n != 0 && j * xx + m != 0)
            quitf(_wa, "not zero! %d %d %d %d %d",xx,i,n,j,m);
        else
            quitf(_ok, "AC2!");
    }
}