## 题目背景

兵强者，攻其将；将智者，伐其情。将弱兵颓，其势自萎。利用御寇，顺相保也。

## 题目描述

33DAI 在《十字军之王 3》游戏中，为了避免敌军使用美人计干扰自己的军事将领，降低自己军队的战斗力，采用了一个奇怪的方法甄选军队的勇士。

一共有 $10^{100}$ 个备选勇士，第 $i$ 位备选勇士的编号为 $i$。33DAI 按照下面的步骤选择出勇士：

1. 先选择了 $n$ 个数，第 $i$ 个数是 $a_i$。
2. 把所有“编号为 $n$ 个数中恰好一个数的倍数”的备选勇士保留。
3. 在所有被保留的编号，选择编号第 $k$ 小的备选勇士作为勇士。

请问他最终会选择编号为多少的备选勇士。

## 输入格式

第一行 $1$ 个数 $n,k$。

第二行 $n$ 个数 $a_1\sim a_n$。

## 输出格式

输出哪个编号的备选勇士成为了勇士。

```input1
2 6
2 3
```

```output1
10
```

下面这些数为两个数中恰好一个数的倍数：$2,3,4,8,9,10,\dots$。注意 $6$ 同时是 $2,3$ 的倍数，不能保留。

```input2
1 10000000000
1
```

```output2
10000000000
```

显然所有编号都会被保留。


```input3
3 39
3 13 20
```

```output3
100
```

被保留的前 $40$ 个编号如下：

- $3,6,9,12,13,15,18,20,21,24$
- $26,27,30,33,36,40,42,45,48,51$
- $52,54,57,63,65,66,69,72,75,80$
- $81,84,87,90,91,93,96,99,100,102$

## 数据规模与约定

对于 $100\%$ 的数据，$1 \le n \le 3$，$1\le k\le 10^{10}$，$1\le a_i\le 10^5$，保证存在答案且答案不超过 $10^{18}$。

- 子任务 1（10 分）：保证 $n=1$。
- 子任务 2（20 分）：保证 $n=2$。
- 子任务 3（30 分）：保证答案不超过 $10^6$。
- 子任务 4（40 分）：没有特殊限制。