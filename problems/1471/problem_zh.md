#### 问题陈述

有 $N$ 块石头，编号为 $1, 2, \ldots, N$ 。每块 $i$ ( $1 \leq i \leq N$ )石头的高度为 $1 \leq i \leq N$ ），石头 $i$ 的高度为 $h_i$ 。这里， $h_1 \lt h_2 \lt \cdots \lt h_N$ 成立。

有一只青蛙，它最初在石块 $1$ 上。它会重复下面的动作若干次以到达石块 $N$ ：

- 如果青蛙目前在 $i$ 号石块上，请跳到以下其中一块：石块 $i + 1, i + 2, \ldots, N$ 。这里需要花费 $(h_j - h_i)^2 + C$ ，其中 $j$ 是要降落的石块。

求青蛙到达石块 $N$ 之前可能产生的最小总成本。

#### 限制因素

- 所有输入值均为整数。
- $2 \leq N \leq 2 \times 10^5$
- $1 \leq C \leq 10^{12}$
- $1 \leq h_1 \lt h_2 \lt \cdots \lt h_N \leq 10^6$ 

#### 输入

输入内容由标准输入法提供，格式如下：

```
$N$ $C$
$h_1$ $h_2$ $\ldots$ $h_N$
``` 

#### 输出

打印可能产生的最低总成本。

```input1
5 6
1 2 3 4 5
``` 

```output1
20
```

如果我们沿着路径 $1$ → $3$ → $5$ ，则产生的总成本为 $((3 - 1)^2 + 6) + ((5 - 3)^2 + 6) = 20$ 。

```input2
2 1000000000000
500000 1000000
``` 

```output2
1250000000000
```

答案可能不适合 32 位整数类型。

```input3
8 5
1 3 4 5 10 11 12 13
``` 

```output3
62
```

如果我们沿着路径 $1$ → $2$ → $4$ → $5$ → $8$ ，则产生的总费用为 $((3 - 1)^2 + 5) + ((5 - 3)^2 + 5) + ((10 - 5)^2 + 5) + ((13 - 10)^2 + 5) = 62$ 。

## 来源

https://atcoder.jp/contests/dp/tasks/dp_z