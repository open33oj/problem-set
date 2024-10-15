## 题目描述

33DAI 最近看到了这样一段代码：

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long ans = 0;
    while (n > 0)
    {
        ans++;
        long long cnt = 0;
        for (long long i = 1; i <= ans; i++)
            if (ans % i == 0)
                cnt++;
        if (cnt % 2 == 0)
            n--;
    }
    cout << ans;
    return 0;
}
```

33DAI 一看最大的数据范围：$n\le 10^{15}$，这一秒时限不是妥妥的超时了吗！

请你想办法优化这段代码，提交一个输出和这个代码一样，但不会超时的代码。

> 显然如果你直接提交上面的代码，是能拿到本题 30 分的。

## 输入格式

第一行一个整数 $n$。  

## 输出格式

一行一个整数，要求和题目描述中的代码输出一致。

```input1
3
```

```output1
5
```

```input2
333
```

```output2
351
```

```input3
123456789012345
```

```output3
123456800123456
```

## 数据规模与约定

对于 $100\%$ 的数据，$1\le  n \le 10^{15}$。

- 子任务 1（30 分）：$1\le n\le 1000$
- 子任务 2（30 分）：$1\le n\le 10^9$
- 子任务 3（40 分）：没有特殊限制。
