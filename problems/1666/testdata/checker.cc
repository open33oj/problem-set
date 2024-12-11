#include "testlib.h"
const int INF6 = 1'000'000;
const int INF9 = 1'000'000'000;
const long long INF12 = 1'000'000'000'000;
const long long INF18 = 1'000'000'000'000'000'000;
bool isPrime(long long x)
{
    for (int i = 2; i <= x - 1; i++)
        if (x % i == 0)
            return false;
    return true;
}
int main(int argc, char *argv[])
{
    registerTestlibCmd(argc, argv);
    int id = inf.readInt();
    if (id == 1)
    {
        int a = ouf.readInt(1, INF9);
        int b = ouf.readInt(1, INF9);
        if (a % 2 == 1 && b % 2 == 1)
            quitf(_ok, "OK!");
        else
            quitf(_wa, "FAIL!");
    }
    if (id == 2)
    {
        long long a = ouf.readLong(1, INF18);
        long long b = ouf.readLong(1, INF18);
        if (a + b > 2147483647)
            quitf(_ok, "OK!");
        else
            quitf(_wa, "FAIL!");
    }
    if (id == 3)
    {
        int a = ouf.readInt(1, INF6);
        if (a == 1)
            quitf(_ok, "OK!");
        else
            quitf(_wa, "FAIL!");
    }
    if (id == 4)
    {
        long long a = ouf.readLong(1, INF12);
        if (a > 2147483647 ||
            a > 1000000000 && isPrime(a))
            quitf(_ok, "OK!");
        else
            quitf(_wa, "FAIL!");
    }
}