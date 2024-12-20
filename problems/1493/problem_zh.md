## 题目背景

我们在查看上周周赛挖土机学员代码时，发现了 ChatGPT 风格的代码。

同学们能积极使用最前沿的工具辅助学习，这是非常好的。但是目前的学习阶段还是要先“训练”自己，让自己掌握更多算法思想，今后才能成为人工智能的主人，去开发类似于 ChatGPT 这样的人工智能。

后面如果再使用 ChatGPT 之类的辅助 AI 参加周赛，老师就会在课堂上点名批评这样的作弊行为哟！

## 题目描述

33DAI 出了一场比赛，正在检查自己出的题目强度。

这场比赛一共 $n$ 道题。每道题 33DAI 都找了一位小朋友验题，第 $i$ 题小朋友拿到了 $a_i$ 分。同时 33DAI 还尝试使用了 ChatGPT 写每题的代码，第 $i$ 题 ChatGPT 拿到了 $b_i$ 分。

请问假如小朋友和 ChatGPT 联手（即每道题可以提交小朋友的代码，也可以提交 ChatGPT 的代码），他们理论上最高能拿多少分。

## 输入格式

第一行一个整数 $n$。  

接下来 $n$ 行，第 $i$ 行为空格隔开的两个整数 $a_i,b_i$。

## 输出格式

一行一个整数，表示他们理论上最高能拿多少分。

```input1
4
100 100
60 30
0 100
30 0
```

```output1
290
```

## 样例解释

四道题目分别选择 `小朋友, 小朋友, ChatGPT, 小朋友` 的代码，即可拿到 $100+60+100+30=290$ 分。

## 数据规模与约定

对于 $100\%$ 的数据，$1\le n \le 100$，$1\le a_i,b_i\le 10^9$

- 子任务 1（30 分）：保证 $n=1$。
- 子任务 2（30 分）：保证 $1\le a_i\le b_i\le 10^6$。
- 子任务 3（40 分）：没有特殊限制。