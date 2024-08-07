## 题目描述

小 C 学习完了字符串匹配的相关内容，现在他正在做一道习题。

对于一个字符串 $S$，题目要求他找到 $S$ 的所有具有下列形式的拆分方案数：
$S = ABC$，$S = ABABC$，$S = ABAB\cdots ABC$，其中 $A,B,C$ 均是非空字符串，且 $A$ 中出现奇数次的字符数量不超过 $C$ 中出现奇数次的字符数量。

更具体地，我们可以定义 $AB$ 表示两个字符串 $A,B$ 相连接，例如 $A = \text{aab}$，$B = \text{ab}$，则 $AB = \text{aabab}$。

并递归地定义 $A^1 = A$，$A^n = A^{n-1}A$（$n\ge2$ 且为正整数）。例如 $A = \text{abb}$，则 $A^3 = \text{abbabbabb}$。

则小 C 的习题是求 $S = (AB)^iC$ 的方案数，其中 $F(A)\le F(C)$，$F(S)$ 表示字符串 $S$ 中出现奇数次的字符的数量。两种方案不同当且仅当拆分出的 $A,B,C$ 中有至少一个字符串不同。

小 C 并不会做这道题，只好向你求助，请你帮帮他。

## 输入格式
从文件 `string.in` 中读入数据。

本题有多组数据，输入文件第一行一个正整数 $T$ 表示数据组数。  
每组数据仅一行一个字符串 $S$，意义见题目描述。$S$ 仅由英文小写字母构成。

## 输出格式

输出到文件 `string.out` 中。

对于每组数据输出一行一个整数表示答案。

```input1
3
nnrnnr
zzzaab
mmlmmlo
```

```output1
8
9
16
```

## 样例说明 1

对于第一组数据，所有的方案为：

1. $A=\color{blue}{\texttt{n}}$，$B=\color{blue}{\texttt{nr}}$，$C=\color{blue}{\texttt{nnr}}$。
2. $A=\color{blue}{\texttt{n}}$，$B=\color{blue}{\texttt{nrn}}$，$C=\color{blue}{\texttt{nr}}$。
3. $A=\color{blue}{\texttt{n}}$，$B=\color{blue}{\texttt{nrnn}}$，$C=\color{blue}{\texttt{r}}$。
4. $A=\color{blue}{\texttt{nn}}$，$B=\color{blue}{\texttt{r}}$，$C=\color{blue}{\texttt{nnr}}$。
5. $A=\color{blue}{\texttt{nn}}$，$B=\color{blue}{\texttt{rn}}$，$C=\color{blue}{\texttt{nr}}$。
6. $A=\color{blue}{\texttt{nn}}$，$B=\color{blue}{\texttt{rnn}}$，$C=\color{blue}{\texttt{r}}$。
7. $A=\color{blue}{\texttt{nnr}}$，$B=\color{blue}{\texttt{n}}$，$C=\color{blue}{\texttt{nr}}$。
8. $A=\color{blue}{\texttt{nnr}}$，$B=\color{blue}{\texttt{nn}}$，$C=\color{blue}{\texttt{r}}$。

```input2
5
kkkkkkkkkkkkkkkkkkkk
lllllllllllllrrlllrr
cccccccccccccxcxxxcc
ccccccccccccccaababa
ggggggggggggggbaabab
```
```output2
156
138
138
147
194
```

## 样例 3

见附加文件中的 [string3.in](file://string3.in) 与 [string3.ans](file://string3.ans)。

## 样例 4

见附加文件中的 [string4.in](file://string4.in) 与 [string4.ans](file://string4.ans)。

## 数据范围与提示

| 测试点编号  | $\vert S\vert \le $ |       特殊限制       |
| :---------: | :-------: | :------------------: |
|  $1\sim 4$  |   $10$    |          无          |
|  $5\sim 8$  |   $100$   |          无          |
| $9\sim 12$  |  $1000$   |          无          |
| $13\sim 14$ | $2^{15}$  | $S$ 中只包含一种字符 |
| $15\sim 17$ | $2^{16}$  | $S$ 中只包含两种字符 |
| $18\sim 21$ | $2^{17}$  |          无          |
| $22\sim 25$ | $2^{20}$  |          无          |

对于所有测试点，保证 $1\le T\le5$，$1\le |S|\le 2^{20}$。