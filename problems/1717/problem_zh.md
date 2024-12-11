## 题目描述

输入一个整数 $n$，请将其分解为若干个质数相乘的形式，并从小到大输出那些质数。

## 输入格式

一个数 $n$。

## 输出格式

输出一行，为空格隔开的若干个质数，你需要保证这些质数每一个都不小于前面的，并且这些质数的乘积为 $n$。

```input1
60
```

```output1
2 2 3 5
```

```input2
987654321
```

```output2
3 3 17 17 379721
```

## 数据规模与约定

对于 $100\%$ 的数据，$2 \le n \le 10^9$。

- 子任务 1（30 分）：保证 $n$ 是一个质数。
- 子任务 2（30 分）：保证 $n\le 1000$。
- 子任务 3（40 分）：没有特殊限制。