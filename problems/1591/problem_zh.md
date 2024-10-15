## 题目描述

33DAI 写了一段冒泡排序的代码：

```cpp
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000;
int n;
int a[MAXN + 5];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    bool flag = true;
    while (flag)
    {
        flag = false;
        for (int i = 1; i <= n - 1; i++)
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
                flag = true;
            }
    }
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}
```

给你输入的 $n$ 及 $a_1\sim a_n$。请你按顺序，打印这个代码在执行时的每一次 `if` 语句的比较以及 `swap` 语句的交换分别操作了哪两个元素。格式如下：

- `cmp,a[{1}],a[{2}]`：`{1}` 和 `{2}` 为两个整数，表示当前**比较**的两个元素的下标，必须保证 `{1} < {2}`
- `swp,a[{1}],a[{2}]`：`{1}` 和 `{2}` 为两个整数，表示当前**交换**的两个元素的下标，必须保证 `{1} < {2}`

## 输入格式

第一行一个整数 $n$。

第二行 $n$ 个整数 $a_1\sim a_n$。

## 输出格式

输出若干行，即按顺序的所有排序过程中的比较与交换。

```input1
5
3 2 5 1 4
```

```output1
cmp,a[1],a[2]
swp,a[1],a[2]
cmp,a[2],a[3]
cmp,a[3],a[4]
swp,a[3],a[4]
cmp,a[4],a[5]
swp,a[4],a[5]
cmp,a[1],a[2]
cmp,a[2],a[3]
swp,a[2],a[3]
cmp,a[3],a[4]
cmp,a[4],a[5]
cmp,a[1],a[2]
swp,a[1],a[2]
cmp,a[2],a[3]
cmp,a[3],a[4]
cmp,a[4],a[5]
cmp,a[1],a[2]
cmp,a[2],a[3]
cmp,a[3],a[4]
cmp,a[4],a[5]
```

```input2
5
1 2 3 4 5
```

```output2
cmp,a[1],a[2]
cmp,a[2],a[3]
cmp,a[3],a[4]
cmp,a[4],a[5]
```

## 数据规模与约定

对于 $100\%$ 的数据，$1 \le n \le 100$，$-10^9\le a_i\le 10^9$。