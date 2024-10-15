#include "testlib.h"
#include <iostream>

using namespace std;
void f(int a, int b)
{
    int i = a / 100 % 10;
    int j = a / 10 % 10;
    int k = a % 10;
    int x = b / 100 % 10;
    int y = b / 10 % 10;
    int z = b % 10;

    if (x == i)
        cout << '2';
    else if (x == j || x == k)
        cout << '1';
    else
        cout << '0';

    if (y == j)
        cout << '2';
    else if (y == i || y == k)
        cout << '1';
    else
        cout << '0';

    if (z == k)
        cout << '2';
    else if (z == i || z == j)
        cout << '1';
    else
        cout << '0';
    cout << '\n';
}
int main(int argc, char *argv[])
{
    setName("Interactor A+B");
    registerInteraction(argc, argv);

    int a = inf.readInt();
    int n = inf.readInt();
    for (int i = 1; i <= n; i++)
    {
        int now;
        cin >> now;
        f(a, now);
        if (a == now)
            quitf(_ok, "!");
    }
    quitf(_wa, "too many guess");
}
