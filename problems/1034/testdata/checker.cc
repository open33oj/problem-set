#include "testlib.h"
int main(int argc, char** argv) {
    registerTestlibCmd(argc, argv);
    int a = inf.readLong();
    int b = inf.readLong();
    int ans = ouf.readLong();
    if (a + b == ans)
        quitf(_ok, "ok");
    else
        quitf(_wa, "wa");
    return 0;
}