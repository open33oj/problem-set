#include <cstdio>
#include <algorithm>
#include <utility>
static const int MAXN = 100004;
static const int LOGN = 18;

int n;
int h[MAXN];
int ans = 0;

namespace rmq {

std::pair<int, int> f[MAXN][LOGN];

inline void init() {
    for (int i = 0; i < n; ++i) f[i][0] = std::make_pair(h[i], i);
    for (int i = 1; i < LOGN; ++i)
        for (int j = 0; j < n - (1 << (i - 1)); ++j)
            f[j][i] = std::min(f[j][i - 1], f[j + (1 << (i - 1))][i - 1]);
}

template <typename T> inline int log2(const T x) {
    return 8 * sizeof(T) - __builtin_clz(x - 1) - 1;
}
inline std::pair<int, int> query(int l, int r) {
    int sz = log2(r - l + 1);
    return std::min(f[l][sz], f[r - (1 << sz) + 1][sz]);
}

}

void solve(int l, int r, int val = 0)
{
    if (l > r) return;
    std::pair<int, int> p = rmq::query(l, r);
    ans += (p.first - val);
    solve(l, p.second - 1, p.first);
    solve(p.second + 1, r, p.first);
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &h[i]);
    rmq::init();

    solve(0, n - 1);

    printf("%d\n", ans);
    return 0;
}
