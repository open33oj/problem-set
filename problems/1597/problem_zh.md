## 题目描述

33DAI 写了一个一段二分猜数字的程序：

```cpp
#include <bits/stdc++.h>
using namespace std;
int l, r, x;
int main()
{
    cin >> l >> r;
    cin >> x;
    int cnt = 0;
    while (l <= r)
    {
        cnt++;
        int mid = (l + r) / 2;
        if (mid == x)
        {
            cout << cnt;
            break;
        }
        if (mid < x)
            l = mid + 1;
        if (mid > x)
            r = mid - 1;
    }
    return 0;
}
```

33DAI 想让你帮他一起造一组数据，他会告诉你他决定的 $l$ 和 $r$，你需要选择一个 $l\sim r$ 之间的数作为 $x$。

显然选择不同的数，上面程序的输出可能不同，请你看看 $l\sim r$ 中有几个数可以得到最大的输出。

## 输入格式

输入一行，为空格隔开的两个数 $l,r$。

## 输出格式

输出 $l\sim r$ 中有几个数可以得到最大的输出。



```input1
1 10
```

```output1
3
```

## 样例 1 解释

$1\sim 10$ 作为 $x$ 时，对应输出分别为 $3,2,3,4,1,3,4,2,3,4$。


```input2
1 100
```

```output2
37
```

```input3
333 33333
```

```output3
234
```

```input4
1 100000000
```

```output4
32891137
```

## 数据规模与约定

对于 $100\%$ 的数据，$1 \le l\le r \le 10^8$。

- 子任务 1（10 分）：保证 $l=r$。
- 子任务 2（20 分）：保证 $r-l=3$。
- 子任务 3（30 分）：保证 $r\le 10^5$。
- 子任务 4（40 分）：没有特殊限制。