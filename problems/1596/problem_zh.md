## 题目描述

33DAI 有 $n$ 个数字，其中有 $m$ 个是 $1$，有 $n-m$ 个是 $0$。

他想把这些数字拼凑成一个 $n$ 位的二进制数，并且希望这个数对应的十进制尽可能大。Kitten 很快告诉了他，只要把 $1$ 放前面，$0$ 放后面就好了。

33DAI 想进一步考考 Kitten，于是他要求 Kitten 拼出来的数中不能有连续的三个 $1$。这当然难不倒 Kitten，你能拼出来吗？

## 输入格式

两个数 $n,m$。

## 输出格式

输出 $m$ 个 $1$、$n-m$ 个 $0$ 能拼出来的“最大的”、“不包含连续三个 $1$”的二进制数。

```input1
2 1
```

```output1
10
```

```input2
5 4
```

```output2
11011
```

```input3
10 3
```

```output3
1101000000
```


## 数据规模与约定

对于 $100\%$ 的数据，$1\le m\le n\le 100$，题目保证必然存在合法的方案。

- 子任务 1（10 分）：保证 $m=1$。
- 子任务 2（20 分）：保证 $n=m+\frac{m}{2}-1$。
- 子任务 3（30 分）：保证 $n=8$。
- 子任务 4（40 分）：没有特殊限制。