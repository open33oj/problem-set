## 问题陈述

给你两个字符串 $s$ 和 $t$ 。请找出一个最长的字符串，它同时是 $s$ 和 $t$ 的子序列。

## 注

字符串 $x$ 的 _子序列_ 是指从 $x$ 中删除 0 个或多个字符，然后在不改变顺序的情况下将剩余字符连接起来得到的字符串。

## 限制因素

- $s$ 和 $t$ 是由小写英文字母组成的字符串。
- $1 \leq |s|, |t| \leq 3000$ 


## 输入

输入内容由标准输入法提供，格式如下：

- $s$
- $t$

## 输出

打印 $s$ 和 $t$ 的最长子串。如果有多个这样的字符串，则接受其中任何一个。

```input1
axyb
abyxb
``` 

```output1
axb
```

答案为 "axb "或 "ayb"，任选其一。

```input2
aa
xayaz
``` 

```output2
aa
``` 

```input3
a
z
``` 

```output3
```

答案是（空字符串）。


```input4
abracadabra
avadakedavra
``` 

```output4
aaadara
``` 

## 来源

https://atcoder.jp/contests/dp/tasks/dp_f