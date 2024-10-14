#### 问题陈述

有一个网格，横向有 $H$ 行，纵向有 $W$ 列。让 $(i, j)$ 表示从上往下第 $i$ 行和从左往右第 $j$ 列的正方形。

在网格中， $N$ 个方格方格 $(r_1, c_1), (r_2, c_2), \ldots, (r_N, c_N)$ 是墙方格，其他方格都是空方格。可以保证 $(1, 1)$ 和 $(H, W)$ 两个方格是空方格。

太郎将从方格 $(1, 1)$ 开始，通过反复向右或向下移动到相邻的空方格，到达 $(H, W)$ 。

求太郎从方格 $(1, 1)$ 到 $(H, W)$ 的路径数，取模 $10^9 + 7$ 。

#### 限制因素

- 所有输入值均为整数。
- $2 \leq H, W \leq 10^5$
- $1 \leq N \leq 3000$
- $1 \leq r_i \leq H$
- $1 \leq c_i \leq W$
- 方格 $(r_i, c_i)$ 都是不同的。
- 方格 $(1, 1)$ 和 $(H, W)$ 是空方格。

#### 输入

输入内容由标准输入法提供，格式如下：

- $H$ $W$ $N$
- $r_1$ $c_1$
- $r_2$ $c_2$
- $:$
- $r_N$ $c_N$

#### 输出

打印太郎从方格 $(1, 1)$ 到 $(H, W)$ 的路径数，模数为 $10^9 + 7$ 。

```input1
3 4 2
2 2
1 4
``` 

```output1
3
```

有以下三条路径

![](file://grid_1_0_muffet.png)

```input2
5 2 2
2 1
4 2
``` 

```output2
0
```

可能没有路径。

```input3
5 5 4
3 1
3 5
1 3
5 3
``` 

```output3
24
``` 

```input4
100000 100000 1
50000 50000
``` 

```output4
123445622
```

请务必打印计数模 $10^9 + 7$ 。

## 来源

https://atcoder.jp/contests/dp/tasks/dp_y