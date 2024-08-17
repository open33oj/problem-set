## 题目描述

幻方是一种很神奇的 $n \times n$ 矩阵：它由数字 $1,2,3, \ldots ,n \times n$ 构成，且每行、每列及两条对角线上的数字之和都相同。

当 $n$ 为奇数时，我们可以通过以下方法构建一个幻方：  
首先将 $ 1 $ 写在第一行的中间。  
之后，按如下方式从小到大依次填写每个数 $k$（$k = 2,3, \ldots ,n \times n$）：

1. 若 $(k-1)$ 在第一行但不在最后一列，则将 $k$ 填在最后一行，$(k-1)$ 所在列的右一列；
2. 若 $(k-1)$ 在最后一列但不在第一行，则将 $k$ 填在第一列，$(k-1)$ 所在行的上一行；
3. 若 $(k-1)$ 在第一行最后一列，则将 $k$ 填在 $(k-1)$ 的正下方；
4. 若 $(k-1)$ 既不在第一行，也不在最后一列，如果 $(k-1)$ 的右上方还未填数，则将 $k$ 填在 $(k-1)$ 的右上方，否则将 $k$ 填在 $(k-1)$ 的正下方。

现给定 $n$，请按上述方法构造 $n \times n$ 的幻方。

## 输入格式

输入只有一行，包含一个整数，即幻方的大小。

## 输出格式

输出包含 $n$ 行，每行 $n$ 个整数，即按上述方法构造出的 $n \times n$ 的幻方。相邻两个整数之间用单个空格隔开。

```input1
3
```
```output1
8 1 6
3 5 7
4 9 2
```

## 数据范围与提示

对于 $100\%$ 的数据，$1 \leq n \leq 39$ 且为奇数。