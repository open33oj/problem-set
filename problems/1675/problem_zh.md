## 题目描述
给定一个长度为 $n$ 的正整数数组 $A$，其中所有数从左至右排成一排。

你需要将 $A$ 中的每个数染成红色或蓝色之一，然后按如下方式计算最终得分：

设 $C$ 为长度为 $n$ 的整数数组，对于 $A$ 中的每个数 $A_i$（$1 \leq i \leq n$）：

- 如果 $A_i$ 左侧没有与其同色的数，则令 $C_i = 0$。
- 否则，记其左侧**与其最靠近的同色数**为 $A_j$，若 $A_i = A_j$，则令 $C_i = A_i$，否则令 $C_i = 0$。

你的最终得分为 $C$ 中所有整数的和，即 $\sum \limits_{i=1}^n C_i$。你需要最大化最终得分，请求出最终得分的最大值。

## 输入格式
**本题有多组测试数据。**

输入的第一行包含一个正整数 $T$，表示数据组数。

接下来包含 $T$ 组数据，每组数据的格式如下：

第一行包含一个正整数 $n$，表示数组长度。

第二行包含 $n$ 个正整数 $A_1, A_2, \dots, A_n$，表示数组 $A$ 中的元素。

## 输出格式
对于每组数据：输出一行包含一个非负整数，表示最终得分的最大可能值。

```input1
3
3
1 2 1
4
1 2 3 4
8
3 5 2 5 1 2 1 4
```

```output1
1
0
8
```

## 提示
**【样例 1 解释】**

对于第一组数据，以下为三种可能的染色方案：

1. 将 $A_1, A_2$ 染成红色，将 $A_3$ 染成蓝色（$\red{1}\red{2}\blue{1}$），其得分计算方式如下：
- 对于 $A_1$，由于其左侧没有红色的数，所以 $C_1 = 0$。
- 对于 $A_2$，其左侧与其最靠近的红色数为 $A_1$。由于 $A_1 \neq A_2$，所以 $C_2 = 0$。
- 对于 $A_3$，由于其左侧没有蓝色的数，所以 $C_3 = 0$。    
该方案最终得分为 $C_1 + C_2 + C_3 = 0$。
2. 将 $A_1, A_2, A_3$ 全部染成红色（$\red{121}$），其得分计算方式如下：
- 对于 $A_1$，由于其左侧没有红色的数，所以 $C_1 = 0$。
- 对于 $A_2$，其左侧与其最靠近的红色数为 $A_1$。由于 $A_1 \neq A_2$，所以 $C_2 = 0$。
- 对于 $A_3$，其左侧与其最靠近的红色数为 $A_2$。由于 $A_2 \neq A_3$，所以 $C_3 = 0$。    
该方案最终得分为 $C_1 + C_2 + C_3 = 0$。
3. 将 $A_1, A_3$ 染成红色，将 $A_2$ 染成蓝色（$\red{1}\blue{2}\red{1}$），其得分计算方式如下：
- 对于 $A_1$，由于其左侧没有红色的数，所以 $C_1 = 0$。
- 对于 $A_2$，由于其左侧没有蓝色的数，所以 $C_2 = 0$。
- 对于 $A_3$，其左侧与其最靠近的红色数为 $A_1$。由于 $A_1 = A_3$，所以 $C_3 = A_3 = 1$。    
该方案最终得分为 $C_1 + C_2 + C_3 = 1$。

可以证明，没有染色方案使得最终得分大于 $1$。

对于第二组数据，可以证明，任何染色方案的最终得分都是 $0$。

对于第三组数据，一种最优的染色方案为将 $A_1, A_2, A_4, A_5, A_7$ 染为红色，将 $A_3, A_6, A_8$ 染为蓝色（$\red{35}\blue{2}\red{51}\blue{2}\red{1}\blue{4}$），其对应 $C = [0, 0, 0, 5, 0, 1, 2, 0]$，最终得分为 $8$。

**【样例 2】**

见选手目录下的 color/color2.in 与 color/color2.ans。

**【数据范围】**

对于所有测试数据，保证：$1\leq T\leq 10$，$2\leq n\leq 2\times 10^5$，$1\leq A_i\leq 10^6$。

| 测试点 | $n$ | $A_i$ |
| :----------: | :----------: | :----------: |
| $1\sim 4$ | $\leq 15$ | $\leq 15$ |
| $5\sim 7$ | $\leq 10^2$ | $\leq 10^2$ |
| $8\sim 10$ | $\leq 2000$ | $\leq 2000$ |
| $11,12$ | $\leq 2\times 10^4$ | $\leq 10^6$ |
| $13\sim 15$ | $\leq 2\times 10^5$ | $\leq 10$ |
| $16\sim 20$ | $\leq 2\times 10^5$ | $\leq 10^6$ |
