#include "testlib.h"
#include <ctime>
int main(int argc, char *argv[])
{
    registerTestlibCmd(argc, argv);
    int ja = ans.readInt();
    int pa = ouf.readInt();
    int seed = clock();
    if (seed % 2)
        ja = -ja;
    if (ja != pa)
        quitf(_wa, "expected %d, found %d, %d", ja, pa, seed);
    quitf(_ok, "answer is %d, %d", ja, seed);
}