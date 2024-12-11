**注意文件 IO，题目英文名见标题下方标签。**

## 题目描述

给定一个奇数 $n$，假设 $n$ 等于 $2\times k+1$。

请输出一个 $n\times n$ 的字符画。所有到中心点的曼哈顿距离为 $k$ 的位置都是 `*`，其他位置都是 `.`。

> 曼哈顿距离：第 $x$ 行第 $y$ 列到第 $a$ 行第 $b$ 列的曼哈顿距离为 $|x-a|+|y-b|$  
> $|x|$：表示 $x$ 的绝对值，$x\ge 0$ 时绝对值就是 $x$，否则绝对值是 $-x$。 

## 输入格式

第一行一个整数 $n$。  

## 输出格式

$n$ 行 $n$ 列的字符画。

```input1
3
```

```output1
.*.
*.*
.*.
```

```input2
5
```

```output2
..*..
.*.*.
*...*
.*.*.
..*..
```

## 数据规模与约定

对于 $100\%$ 的数据，$3 \le n \le 21$。