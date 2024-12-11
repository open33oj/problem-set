## 题目背景

存其形，完其势；友不疑，敌不动。巽而止蛊。

## 题目描述

Kitten 写了一个三位数 $n$，假设 $n$ 的个位十位百位分别是 $a,b,c$，保证了 $c\neq 0$。

请你构造一个三位数 $m$，来帮她的 $n$ 完成伪装金蝉脱壳。假设 $m$ 的个位十位百位分别是 $x,y,z$，则必须要保证 $x-y=a-b$ 且 $b-c=y-z$ 且 $z\neq 0$。

请你算算有多少种 $m$ 满足要求。

## 输入格式

一个数 $n$。

## 输出格式

满足要求的 $m$ 的方案数。

```input1
123
```

```output1
7
```

$123,234,789,678,567,345,456$ 七个数都满足要求。

```input2
391
```

```output2
2
```

只有 $391,280$ 满足要求。

```input3
333
```

```output3
9
```

$111,222,333,444,555,666,777,888,999$ 都满足。


## 数据规模与约定

对于 $100\%$ 的数据，$100 \le n \le 999$。

- 子任务 1（10 分）：保证 $a=b=c$。
- 子任务 2（20 分）：保证 $a=b=1$。
- 子任务 3（30 分）：保证 $a=1$。
- 子任务 4（40 分）：没有特殊限制。