#include "testlib.h"

int main(int argc, char *argv[])
{
    registerTestlibCmd(argc, argv);
    int n = inf.readInt();
    int a = ouf.readInt();
    int b = ouf.readInt();
    int c = ouf.readInt();
    if (a < 0 || b < 0 || c < 0)
        quitf(_wa, "a,b,c must >= 0");
    if (a + b + c != n)
        quitf(_wa, "a+b+c!=n");
    quitf(_ok, "good!");
}