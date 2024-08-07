#pragma GCC diagnostic push 
#pragma GCC diagnostic ignored "-Wshadow"
#include "testlib.h"
#pragma GCC diagnostic pop

#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = (a), i##_end_ = (b); i < i##_end_; ++i)
#define debug(...) fprintf(stderr, __VA_ARGS__)
#define mp make_pair
#define x first
#define y second
#define pb push_back
#define SZ(x) (int((x).size()))
#define ALL(x) (x).begin(), (x).end()

template<typename T> inline bool chkmin(T &a, const T &b) { return a > b ? a = b, 1 : 0; }
template<typename T> inline bool chkmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }

typedef long long LL;

const int oo = 0x3f3f3f3f;

const int lim = 820000;
const int maxn = 55, maxm = 410;

int n, m;
int a[maxn + 5][maxm + 5], empty[maxn + 5];

inline void move(int x, int y, int id)
{
	if (x == y) ouf.quitf(_wa, "A %d", id + 1);
	if (empty[x] >= m) ouf.quitf(_wa, "A %d", id + 1);
	if (empty[y] <= 0) ouf.quitf(_wa, "A %d", id + 1);
	a[y][--empty[y]] = a[x][empty[x]++];
}

int main(int argc, char * argv[])
{
	char * _argv[4] = {argv[0], argv[1], argv[2], argv[2]};
    registerTestlibCmd(4, _argv);
	n = inf.readInt();
	m = inf.readInt();
	REP(i, 0, n) empty[i] = 0;
	empty[n] = m;
	REP(i, 0, n) 
	{
		REP(j, 0, m) a[i][j] = inf.readInt(), --a[i][j];
		reverse(a[i], a[i] + m);
	}
	int K = ouf.readInt(0, lim, "K");
	REP(i, 0, K)
	{
		int u = ouf.readInt(1, n + 1, format("u[%d]", i + 1)), v = ouf.readInt(1, n + 1, format("v[%d]", i + 1));
		--u, --v;
		move(u, v, i + 1);
	}
	REP(i, 0, n + 1)
	{
		if (!(empty[i] == 0 || empty[i] == m)) ouf.quitf(_wa, "B %d", i + 1);
		if (empty[i] == 0) REP(j, 1, m) if (a[i][j] != a[i][j - 1]) ouf.quitf(_wa, "B %d", i + 1);
	}
	quitf(_ok, "OK");
	return 0;
}
