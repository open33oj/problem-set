## 题目描述
在玩惯了成语接龙之后，小 J 和他的朋友们发明了一个新的接龙规则。

总共有 $n$ 个人参与这个接龙游戏，第 $i$ 个人会获得一个整数序列 $S_i$ 作为他的词库。

一次游戏分为若干轮，每一轮规则如下：

- $n$ 个人中的某个人 $p$ 带着他的词库 $S_p$ 进行接龙。若这不是游戏的第一轮，那么这一轮进行接龙的人不能与上一轮相同，但可以与上上轮或更往前的轮相同。
- 接龙的人选择一个长度在 $[2, k]$ 的 $S_p$ 的连续子序列 $A$ 作为这一轮的**接龙序列**，其中 $k$ 是给定的常数。若这是游戏的第一轮，那么 $A$ 需要以元素 $1$ 开头，否则 $A$ 需要以上一轮的接龙序列的最后一个元素开头。
  - 序列 $A$ 是序列 $S$ 的连续子序列当且仅当可以通过删除 $S$ 的开头和结尾的若干元素（可以不删除）得到 $A$。

为了强调合作，小 J 给了 $n$ 个参与游戏的人 $q$ 个任务，第 $j$ 个任务需要这 $n$ 个人进行一次游戏，在这次游戏里进行恰好 $r_j$ 轮接龙，且最后一轮的接龙序列的最后一个元素恰好为 $c_j$。为了保证任务的可行性，小 J 请来你判断这 $q$ 个任务是否可以完成的，即是否存在一个可能的游戏过程满足任务条件。

## 输入格式
**本题有多组测试数据。**

输入的第一行包含一个正整数 $T$，表示数据组数。

接下来包含 $T$ 组数据，每组数据的格式如下：

第一行包含三个整数 $n, k, q$，分别表示参与游戏的人数、接龙序列长度上限以及任务个数。

接下来 $n$ 行：

第 $i$ 行包含 $(l_i + 1)$ 个整数 $l_i, S_{i,1}, S_{i,2}, \dots , S_{i,l_i}$，其中第一个整数 $l_i$ 表示序列 $S_i$ 的长度，接下来 $l_i$ 个整数描述序列 $S_i$。

接下来 $q$ 行：

第 $j$ 行包含两个整数 $r_j, c_j$，描述一个任务。

## 输出格式
对于每个任务：输出一行包含一个整数，若任务可以完成输出 1，否则输出 0。

```input1
1
3 3 7
5 1 2 3 4 1
3 1 2 5
3 5 1 6
1 2
1 4
2 4
3 4
6 6
1 1
7 7
```

```output1
1
0
1
0
1
0
0
```

## 提示
**【样例 1 解释】**

在下文中，我们使用 $\{A_i\} = \{A_1, A_2, \dots , A_r\}$ 表示一轮游戏中所有的接龙序列，$\{p_i\} = \{p_1, p_2, \dots , p_r\}$ 表示对应的接龙的人的编号。由于所有字符均为一位数字，为了方便我们直接使用数字字符串表示序列。

- 对于第一组询问，$p_1 = 1$、$A_1 = 12$ 是一个满足条件的游戏过程。
- 对于第二组询问，可以证明任务不可完成。注意 $p_1 = 1$、$A_1 = 1234$ 不是合法的游戏过程，因为此时 $|A_1| = 4 > k$。
- 对于第三组询问，$\{p_i\} = \{2, 1\}$、$\{A_i\} = \{12, 234\}$ 是一个满足条件的游戏过程。
- 对于第四组询问，可以证明任务不可完成。注意 $\{p_i\} = \{2, 1, 1\}、\{A_i\} = \{12, 23, 34\}$ 不是一个合法的游戏过程，因为尽管所有的接龙序列长度均不超过 $k$，但第二轮和第三轮由同一个人接龙，不符合要求。
- 对于第五组询问，$\{p_i\} = \{1, 2, 3, 1, 2, 3\}$、$\{A_i\} = \{12, 25, 51, 12, 25, 516\}$ 是一个满足条件的游戏过程。
-  对于第六组询问，可以证明任务不可完成。注意每个接龙序列的长度必须大于等于 $2$，因此 $A_1 = 1$ 不是一个合法的游戏过程。
- 对于第七组询问，所有人的词库均不存在字符 $\tt 7$，因此任务显然不可完成。

**【样例 2】**

见选手目录下的 chain/chain2.in 与 chain/chain2.ans。

该样例满足测试点 1 的特殊性质。

**【样例 3】**

见选手目录下的 chain/chain3.in 与 chain/chain3.ans。

该样例满足测试点 2 的特殊性质。

**【样例 4】**

见选手目录下的 chain/chain4.in 与 chain/chain4.ans。

该样例满足特殊性质 A，其中前两组测试数据满足 $n \leq 1000$、$r \leq 10$、单组测试数据内所有词库的长度和 $\leq 2000$、$q \leq 1000$。

**【样例 5】**

见选手目录下的 chain/chain5.in 与 chain/chain5.ans。

该样例满足特殊性质 B，其中前两组测试数据满足 $n \leq 1000$、$r \leq 10$、单组测试数据内所有词库的长度和 $\leq 2000$、$q \leq 1000$。

**【样例 6】**

见选手目录下的 chain/chain6.in 与 chain/chain6.ans。

该样例满足特殊性质 C，其中前两组测试数据满足 $n \leq 1000$、$r \leq 10$、单组测试数据内所有词库的长度和 $\leq 2000$、$q \leq 1000$。

**【数据范围】**

对于所有测试数据，保证：
- $1 \leq T \leq 5$；
- $1 \leq n \leq 10^5$，$2 \leq k \leq 2 \times 10^5$，$1 \leq q \leq 10^5$；
- $1 \leq l_i \leq 2 \times 10^5$，$1 \leq S_{i,j} \leq 2 \times 10^5$；
- $1 \leq r_j \leq 10^2$，$1 \leq c_j \leq 2 \times 10^5$；
- 设 $\sum l$ 为**单组测试数据内**所有 $l_i$ 的和，则 $\sum l\leq 2\times 10^5$。

| 测试点 | $n\leq$ | $r\leq$ | $\sum l\leq$ | $q\leq$ | 特殊性质 |
| :----------: | :----------: | :----------: | :----------: | :----------: | :----------: |
| $1$ | $10^3$ | $1$ | $2000$ | $10^3$ | 无 |
| $2,3$ | $10$ | $5$ | $20$ | $10^2$ | 无 |
| $4,5$ | $10^3$ | $10$ | $2000$ | $10^3$ | A |
| $6$ | $10^5$ | $10^2$ | $2\times 10^5$ | $10^5$ | A |
| $7,8$ | $10^3$ | $10$ | $2000$ | $10^3$ | B |
| $9,10$ | $10^5$ | $10^2$ | $2\times 10^5$ | $10^5$ | B |
| $11,12$ | $10^3$ | $10$ | $2000$ | $10^3$ | C |
| $13,14$ | $10^5$ | $10^2$ | $2\times 10^5$ | $10^5$ | C |
| $15\sim 17$ | $10^3$ | $10$ | $2000$ | $10^3$ | 无 |
| $18\sim 20$ | $10^5$ | $10^2$ | $2\times 10^5$ | $10^5$ | 无 |

特殊性质 A：保证 $k = 2 \times 10^5$。

特殊性质 B：保证 $k ≤ 5$。

特殊性质 C：保证在单组测试数据中，任意一个字符在词库中出现次数之和均不超过 $5$。
