#include <bits/stdc++.h>
using namespace std;
int n;
string s;
bool isPrime(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}
int main()
{
    cin >> n;
    for (int i = 10; i <= n; i++)
    {
        s += (char)(i / 10 + '0');
        s += (char)(i % 10 + '0');
    }
    //cout << s << "\n";
    int cnt = 0;
    for (int i = 0; i + 4 - 1 < s.size(); i++)
    {
        if (s[i] == '0')
            continue;
        int now = (s[i] - '0') * 1000 +
                  (s[i + 1] - '0') * 100 +
                  (s[i + 2] - '0') * 10 +
                  (s[i + 3] - '0');
        if (isPrime(now))
        {
            cnt++;
            //cout << now << "\n";
        }
    }
    cout << cnt << "\n";
    return 0;
}