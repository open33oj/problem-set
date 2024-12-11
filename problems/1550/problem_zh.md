## 题目描述

给你一个字符串 $s$，请进行一轮“洗牌”，输出“洗牌”后的字符串。

“洗牌”时会构建一个新的字符串 $t$，$t$ 初始为一个空字符串，然后会重复执行以下步骤直到 $s$ 为空：

1. 如果 $s$ 还有字符，把 $s$ 最**前**面的字符添加到 $t$ 的末尾，然后把 $s$ 最**前**面的字符删掉。
2. 如果 $s$ 还有字符，把 $s$ 最**后**面的字符添加到 $t$ 的末尾，然后把 $s$ 最**后**面的字符删掉。

$s$ 中的字符都被删完后，$t$ 就是“洗牌”后的字符串。

## 输入格式

输入一个字符串 $s$。

## 输出格式

输出“洗牌”后的字符串。

```input1
abcdefg
```

```output1
agbfced
```

## 数据规模与约定

对于 $100\%$ 的数据，$s$ 中仅包含小写英文字母，$1\le |s|\le 100$，$|s|$ 表示字符串 $s$ 的长度。

- 子任务 1（30 分）：保证 $s$ 中全是小写英文字母 `a`。
- 子任务 2（30 分）：保证 $|s|$ 是一个偶数。
- 子任务 3（40 分）：没有特殊限制。