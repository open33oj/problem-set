## 题目描述

同学们常常说TooY0ung是~~毒瘤出题人~~ 良心出题人，TooY0ung可以负责任的说，今天的题真的不毒瘤。

你有一个矩阵（没学过矩阵概念的同学，其实理解为二维数组就好了），矩阵上每个格子都有一个小写字母。

请你维护以下两种操作:

* 输入 ```1 x y c```，将第$x$行第$y$列的字母修改为$c$。
* 输入 ```2 s```，查询$s$单词在矩阵中出现的次数。

（$s$的长度不超过$4$）

注:我们定义，单词在矩阵中出现当且仅当向下、向右、向右下 (和水平线夹角 135度)三种方向即可，且必须是一条直线上的字符 (不能转弯)。具体可以参考样例说明。

## 输入格式

第一行输入两个正整数 $n,m$ ，用空格隔开，代表矩阵的行数和列数。

接下来的$n$行，每行输入一个长度为 $m$ 的字符串，代表字符矩阵

接下来的一行输入一个正整数 $q$ ，代表操作次数。

接下来的 $q$ 行，每行输入一行操作,操作如题意所示

## 输出格式

对于每次 $2$ 号操作，输出一个整数代表答案。

```input1
3 4
abcd
cbae
cccc
3
2 abc
1 3 3 b
2 ab
```

```output1
2
3
```

```input2
2 2
ab
cd
1
2 a
```

```output2
3
```

## 提示

![image](file://vf7Hj-URXPNDv-ckYaUjZ.png)

## 数据规模与约定

对于 $100\%$ 的数据 保证 $1 \leq n,m \leq 300$ , $1 \leq q \leq 10^5$

子任务划分：

- 子任务 1（30 分）：保证 $1 \leq n,m \leq 10$ , $1 \leq q \leq 100$，且只有操作 2
- 子任务 2（30 分）：保证 $1 \leq n,m \leq 10$ , $1 \leq q \leq 100$
- 子任务 3（40 分）：没有特殊限制
