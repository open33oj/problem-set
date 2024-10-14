## 题目描述

33DAI 最近看到了这样一段代码：

```cpp
#include <bits/stdc++.h>
using namespace std;
long long n;
long long ans;
int main()
{
    cin >> n;
    ans = 0;
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= i; j++)
        {
            long long now = 0;
            for (long long k = 1; k <= i; k++)
                if (k % 10 == 0)
                    now += j;
            ans += now;
        }
    }
    cout << ans << "\n";
    return 0;
}
```

33DAI 一看最大的数据范围：$n\le 10^5$，这一秒时限不是妥妥的超时了吗！

请你想办法优化这段代码，提交一个输出和这个代码一样，但不会超时的代码。

> 显然如果你直接提交上面的代码，是能拿到本题 30 分的。

## 输入格式

第一行一个整数 $n$。  

## 输出格式

一行一个整数，要求和题目描述中的代码输出一致。

```input1
33
```

```output1
13645
```

## 数据规模与约定

对于 $100\%$ 的数据，$1\le  n \le 10^5$。

- 子任务 1（30 分）：$1\le n\le 100$
- 子任务 2（30 分）：$1\le n\le 5000$
- 子任务 3（40 分）：没有特殊限制。