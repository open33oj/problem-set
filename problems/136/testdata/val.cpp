#include "testlib.h"

int main()
{
    registerValidation();

    int n = inf.readInt(1, 100000); inf.readEoln();
    for (int i = 0; i < n; ++i) {
        inf.readInt(0, 10000);
        if (i != n - 1) inf.readSpace(); else inf.readEoln();
    }

    inf.readEof();
    return 0;
}

