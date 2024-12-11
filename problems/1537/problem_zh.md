## 题目描述

33DAI 发现 2024 年的 4 月 4 日刚好星期四。

于是他想知道下一次出现“**年份 4 结尾，日期为 4 月 4 日，且是星期四**”的日期是啥时候。

更进一步，现在给你一个整数 $n$，请你算出从 `2024 年 4 月 4 日`开始，按时间顺序的前 $n$ 个的“**年份 4 结尾，日期为 4 月 4 日，且是星期四**”的日期

--------

这里有一些你要知道的:

- $2024$ 年 $4$ 月 $4$ 日是星期四。
- $4,6,11$ 和 $9$ 月有 $30$ 天，其他月份除了 $2$ 月都有 $31$ 天，闰年 $2$ 月有 $29$ 天，平年 $2$ 月有 $28$ 天。
- 年份可以被 $4$ 整除的为闰年 ( $1992=4*498$ 所以 $1992$ 年是闰年，但是 $1990$ 年不是闰年 )。
- 以上规则不适合于世纪年。可以被 $400$ 整除的世纪年为闰年，否则为平年。所以，$1700,1800,1900,2100$ 年是平年，而 $2000$ 年是闰年。

## 输入格式

第一行一个整数 $n$。  

## 输出格式

输出 $n$ 行，以此表示从 `2024 年 4 月 4 日`开始，按时间顺序的前 $n$ 个的“**年份 4 结尾，日期为 4 月 4 日，且是星期四**”的日期

```input1
10
```

```output1
2024 4 4
2154 4 4
2244 4 4
2374 4 4
2424 4 4
2554 4 4
2644 4 4
2774 4 4
2824 4 4
2954 4 4
```

## 数据规模与约定

对于 $100\%$ 的数据，保证 $n\le 100$。

- 子任务 1（30 分）：保证 $n=3$。
- 子任务 2（30 分）：保证 $n\le 10$。
- 子任务 3（40 分）：没有特殊限制。