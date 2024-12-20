## 题目背景

不敌其力，而消其势，兑下乾上之象。

## 题目描述

Kitten 在游戏中正带领勇士进攻 33DAI 的补给城堡（所以叫釜底抽薪😄）。

Kitten 有 $n$ 名勇士，编号从 $1\sim n$，勇士类型用一个整数表示，Kitten 编号为 $i$ 的勇士类型为 $a_i$。

33DAI 也有 $n$ 名勇士，编号也从 $1\sim n$，勇士类型用一个整数表示，33DAI 编号为 $i$ 的勇士类型为 $b_i$。

只要两人同样编号的勇士类型一样，Kitten 就能攻下城池。每次 Kiiten 可以施展魔法，每次魔法可以把某个类型的勇士变为另一类型（同时影响两个人的所有该类型勇士）。请问 Kitten 最少几次魔法就可以攻下城堡。

## 输入格式

第一行一个数 $n$。

第二行 $n$ 个整数 $a_1\sim a_n$。

第三行 $n$ 个整数 $b_1\sim b_n$。

## 输出格式

输出 Kitten 最少施展几次魔法。

```input1
5
3 3 1 100 2
3 3 1 100 2
```

```output1
0
```

初始就一样，不用施展魔法就能攻下。

```input2
7
1 2 3 5 4 5 4 
2 2 2 4 5 4 5
```

```output2
3
```

一种方案是：
- 先把所有类型为 $4$ 的勇士变为类型 $5$
- 然后把所有类型为 $3$ 的勇士变为类型 $2$
- 然后把所有类型为 $2$ 的勇士变为类型 $1$


## 数据规模与约定

对于 $100\%$ 的数据，$1 \le n \le 5000$，$1\le a_i,b_i\le 10^{18}$。

- 子任务 1（10 分）：$n=1$。
- 子任务 2（20 分）：保证所有 $a_i$ 都相等。
- 子任务 3（30 分）：保证所有 $a_i$ 都互不相等。
- 子任务 4（40 分）：没有特殊限制。
