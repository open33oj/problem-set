## 题目描述

~~题目的灵感来自TooY0ung某次面向样例编程~~

给你一个由 `<`、`=` 和 `>` 组成的字符串 $S$ 。

请判断 $S$ 中是否存在**双向箭头**字符串。

字符串 $D$ 是双向箭头字符串，当且仅当有一个**正整数** $k$ 使得 $D$ 是由 $1$ 个 `<`、 $k$ 个 `=` 和 $1$个 `>` 连接得到的长度为 $(k+2)$ 的字符串 。

## 输入格式

输入一个字符串$S$

## 输出格式

输出"Yes"或者"No"，表示字符串中是否存在**双向箭头**字符串，如果存在则输出"Yes"，不存在则输出"No"。（输出内容不包含引号）

```input1
<==>
```

```output1
Yes
```

## 数据规模与约定

对于 $100\%$ 的数据，$1 \le |S| \le 10$，$S$ 中仅包含  `<`、`=` 和 `>`  三种字符。$|S|$表示字符串长度。

- 子任务 1（30 分）：保证字符串$S$以`<`开始，以`>`结束。
- 子任务 2（30 分）：保证不包含字符 `=`。
- 子任务 3（40 分）：没有特殊限制。

