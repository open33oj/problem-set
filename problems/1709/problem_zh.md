## 题目描述

33DAI 想要举办一场擂台游戏，如果共有 $2^k$ 名选手参加，那么游戏分为 $k$ 轮进行：

- 第一轮编号为 $1, 2$ 的选手进行一次对局，编号为 $3, 4$ 的选手进行一次对局，以此类推，编号为 $2^k - 1, 2^k$ 的选手进行一次对局。
- 第二轮在只保留第一轮的胜者的前提下，相邻的两位依次进行一场对局。
- 以此类推，第 $k - 1$ 轮在只保留第 $k - 2$ 轮的 $4$ 位胜者的前提下，前两位、后两位分别进行对局，也就是所谓的半决赛。
- 第 $k$ 轮即为半决赛两位胜者的决赛。

现在 33DAI 已知这 $2^k$ 名选手的实力分别为 $1\sim 2^k$。两位选手的输赢直接通过实力大小比较决定。实力大的选手胜。

显然选手不同的编号方法对应的最终比赛情况是完全不一样的。请问其中实力为 $x$ 的选手最多能参加到第几轮比赛。

## 输入格式

两个数 $k,x$。

## 输出格式

一个数，即实力为 $x$ 的选手最多能参加到第几轮比赛。

```input1
3 3
```

```output1
2
```

有一种方案是如下编号：

- 第一轮编号 1~8 的选手实力分别为：$5,7,6,8,3,1,2,4$ 
- 第二轮选手的实力分别为：$7,8,3,4$
- 第三轮选手的实力分别为：$8,4$

```input2
3 8
```

```output2
3
```

```input3
3 1
```

```output3
1
```

显然不管怎么分，都会第一轮出局。

```input4
3 7
```

```output4
3
```

## 数据规模与约定

对于 $100\%$ 的数据，$1 \le k \le 20$，$1\le x\le 2^k$。

- 子任务 1（30 分）：保证 $x=2^k$。
- 子任务 2（30 分）：保证 $k=3$。
- 子任务 3（40 分）：没有特殊限制。