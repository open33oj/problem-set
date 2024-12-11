## 题目背景

类以诱之，击蒙也。

## 题目描述

33DAI 认为质数是玉。

现在他给你一个不包含数位 $0$ 的整数 $n$，请你看看能否通过重新排列数位来把这个整数变为质数。

如果可以，输出可以变成的最小的一个质数，否则输出 $-1$。

## 输入格式

一个数 $n$。

## 输出格式

输出重排数位（也可以不重排）可以变成的最小的一个质数，如果变不成质数，输出 $-1$。

```input1
772
```

```output1
277
```

实际上 $277,727$ 都是质数，输出较小的就是 $277$。

```input2
277
```

```output2
277
```

可以不重排，如果初始就是质数。


```input3
248
```

```output3
-1
```

不管怎么重排都不是质数。

## 数据规模与约定

对于 $100\%$ 的数据，$1 \le n \lt 10^6$，且 $n$ 不含数位 $0$。

- 子任务 1（10 分）：保证怎么排都不是质数。（但想必不会有人第一题只输出 $-1$ 拿 $10$ 分吧。）
- 子任务 2（30 分）：保证 $n\lt 20$。
- 子任务 3（40 分）：保证 $n$ 是个三位数。
- 子任务 4（20 分）：没有特殊限制。