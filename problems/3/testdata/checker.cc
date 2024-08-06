/**
 * @file checker.cpp
 * @author Macesuted (i@macesuted.moe)
 * @date 2021-10-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "testlib.h"
//
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);
    int n = inf.readInt();
    for (int i = 1; i <= n; i++)
        if (ouf.readInt() != i)
            quitf(_wa, "Wrong Answer.");
    quit(_ok, "Accepted!");
}