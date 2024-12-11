## 题目背景

有人说：“33DAI 出的语法周赛都是抄的题目，都是改编题，不是原创题。”

33DAI 听说后，想了一下语法周赛的题目如果去找原题改编要花多久。


## 题目描述

对于一道综合评分 $a$ 的题目。

如果找题目改编，33DAI 大概需要花费 $a^a$ 的时间在其他题库中挑题，需要花费 $a!$ 的时间来套一个背景故事，然后还要花 $2\times a$ 的时间写个标程并造数据。

而如果 33DAI 自己出，大概只需要 $a^2$ 的时间把最近的趣事编为题面，然后花 $a$ 的时间造好数据。

请你求出对于评分为 $a$ 的题目，33DAI 去找原题改编会比自己随手出多花多少时间。

> 对于正整数 $a$，$a^a$ 的值为 $a$ 个 $a$ 相乘的值。  
> 对于正整数 $a$，$a!$ 的值为 $1$ 到 $a$ 之间的所有整数相乘的值。  
> 对于正整数 $a$，$a^2$ 的值为 $2$ 个 $a$ 相乘的值。

## 输入格式

输入一个整数 $a$，即题目评分。

## 输出格式

输出 33DAI 去找原题改编需要多花的时间。

```input1
1
```

```output1
2
```

```input2
2
```

```output2
4
```

```input3
3
```

```output3
27
```
## 数据规模与约定

对于 $100\%$ 的数据，$1 \le a \le 13$。