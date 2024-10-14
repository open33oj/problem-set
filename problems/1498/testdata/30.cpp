#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    assert(s.size() == 1 ||
           s.size() == 2 && s == "10");
    cout << s;
    return 0;
}