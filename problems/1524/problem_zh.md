## 题目描述

**TooY0ung 和 TooSimple 在玩一个数字游戏**

首先，TooY0ung 和 TooSimple 每人随机使用 c++ 生成四个数字 $x,y,a,b$

属于 TooY0ung 的两个数字为 $x$ 和 $a$ ，属于 TooSimple 的两个数字为 $y$ 和 $b$ 。

很是倒霉，不知道为什么 TooY0ung 初始分得的数字 $x$ 总是小于 TooSimple 初始分得的数字 $y$ 。

游戏的规则是：

TooY0ung 手上的初始数字为 $x$ ，TooSimple 手上的初始数字为 $y$ 。

接下来每一轮：TooY0ung 将手上的数字 $+$ $a$ ， TooSimple 将手上的数字 $+$ $b$ 。

问经过多少轮后，TooY0ung 手中的数字会超过 TooSimple？

补充说明：设 TooY0ung 手中的数字是 $n$ , 设 TooSimple 手中的数字是 $m$ ，“ TooY0ung 手中的数字会超过 TooSimple ” 的要求是 $n > m$ 。

注意，可能存在永远无法超过的情况，此时需要输出$-1$ 。

## 输入格式

输入一行四个正整数，$x,y,a,b$

## 输出格式

输出一个数字，表示答案。

```input1
5 10 5 2
```

```output1
2
```

```input2
5 10 100 3
```

```output2
1
```

## 数据规模与约定

对于 $100\%$ 的数据，$1 \le x < y \le 1000$ ，$1 \le a , b \le 1000$

- 子任务 1（30 分）：保证 $a < b$
- 子任务 2（30 分）：保证 $a = 2 $ , $ b = 1$
- 子任务 3（40 分）：没有特殊限制。

