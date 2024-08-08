## 题目描述

策策同学特别喜欢逛公园。 公园可以看成一张 $n$ 个点 $m$ 条边构成的有向图，且没有自环和重边。其中 $1$ 号点是公园的入口， $n$ 号点是公园的出口，每条边有一个非负权值，代表策策经过这条边所要花的时间。

策策每天都会去逛公园，他总是从 $1$ 号点进去，从 $n$ 号点出来。

策策喜欢新鲜的事物，他不希望有两天逛公园的路线完全一样，同时策策还是一个特别热爱学习的好孩子，他不希望每天在逛公园这件事上花费太多的时间。如果 $1$ 号点到 $n$ 号点的最短路长为 $d$，那么策策只会喜欢长度不超过 $d + k$ 的路线。

策策同学想知道总共有多少条满足条件的路线，你能帮帮他吗？

为避免输出过大，答案对 $p$ 取模。

如果有无穷多条合法的路线，请输出 `−1`。

## 输入格式

第一行包含一个整数 $T$, 代表数据组数。  
接下来 $T$ 组数据，对于每组数据：  
第一行包含四个整数 $n,m,k,p$， 每两个整数之间用一个空格隔开。  
接下来 $m$ 行，每行三个整数 $a_i,b_i,c_i$， 代表编号为 $a_i,b_i$ 的点之间有一条权值为 $c_i$ 的有向边，每两个整数之间用一个空格隔开。

## 输出格式

输出文件包含 $T$ 行，每行一个整数代表答案。

```input1
2
5 7 2 10
1 2 1
2 4 0
4 5 2
2 3 2
3 4 1
3 5 2
1 5 3
2 2 0 10
1 2 0
2 1 0
```
```output1
3
-1

```
## 样例说明 1

对于第一组数据，最短路为 $3$。

$1 - 5, 1 - 2 - 4 - 5, 1 - 2 - 3 - 5$ 为 $3$ 条合法路径。

## 数据范围与提示

对于不同测试点，我们约定各种参数的规模**不会超过**如下

|测试点编号|$T$|$n$|$m$|$k$|是否有 $0$ 边|
|:-:|:-:|:-:|:-:|:-:|:-:|
|$1$|$5$|$5$|$10$|$0$|否|
|$2$|$5$|$10^3$|$2\times 10^3$|$0$|否|
|$3$|$5$|$10^3$|$2\times 10^3$|$50$|否|
|$4$|$5$|$10^3$|$2\times 10^3$|$50$|否|
|$5$|$5$|$10^3$|$2\times 10^3$|$50$|否|
|$6$|$5$|$10^3$|$2\times 10^3$|$50$|是|
|$7$|$5$|$10^5$|$2\times 10^5$|$0$|否|
|$8$|$3$|$10^5$|$2\times 10^5$|$50$|否|
|$9$|$3$|$10^5$|$2\times 10^5$|$50$|是|
|$10$|$3$|$10^5$|$2\times 10^5$|$50$|是|

对于 $100\%$ 的数据：$1\le p \le 10^9$，$1 \le a_i,b_i \le n$，$0 \le c_i \le 10^3$。

数据保证：至少存在一条合法的路线。