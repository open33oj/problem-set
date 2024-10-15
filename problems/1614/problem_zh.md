## 题目描述

33DAI 给第三场 CSP-J 模拟赛的四道题目都用了奇怪的标题。显然我们可以通过百度搜索来弄清楚这些标题的意思。

一天 33DAI 造访了猫猫国，猫猫国的每个单词都是由小写英文字母构成的，长度都恰好为 $4$。33DAI 在猫猫国看到了一段话，想要弄清楚这段话的含义就有点困难了，于是 33DAI 希望你来帮他翻译一下。

这段话一共包含 $n$ 个猫猫国单词，第 $i$ 个单词是 $s_i$。为了帮你翻译，33DAI 还给了你猫猫国词典，包含了 $m$ 个单词的含义，每个单词的含义都由一些猫猫国单词构成。

33DAI 希望你从前往后，每遇到一个猫猫国词典中存在的单词，就把这个单词替换为词典中对应的含义。显然含义中如果包含了猫猫国词典中的单词也继续替换。直到无法再替换了为止。

由于最终的译文可能很长，你只需要输出译文中所有小写英文字母对应的 $ASCII$ 码之和对 $10^9+7$ 取模后的结果即可。

## 输入格式

第一行包含两个整数 $n,m$，含义如题意所述。

第二行为 $n$ 个空格隔开的猫猫国单词，即需要翻译的句子。

接下来 $m$ 行，每行首先输入一个字符串，即词典中的某个猫猫国单词。然后一个整数 $num$ 表示在这个单词的含义由几个单词构成。然后是 $num$ 个空格隔开的猫猫国单词。

## 输出格式

输出一个整数，即题目要求的内容。

```input1
7 3
good isxx badx andx badx isxx good
badx 2 orxx xorx
good 3 badx orxx badx
orxx 1 okxx
```

```output1
7801
```

翻译句子的流程是（小括号是便于理解得辅助记号，不是译文的内容）：

- `good isxx badx andx badx isxx good`
- `(badx orxx badx) isxx badx andx badx isxx (badx orxx badx)`
- `(orxx xorx) orxx (orxx xorx) isxx (orxx xorx) andx (orxx xorx) isxx (orxx xorx) orxx (orxx xorx)`
- `okxx xorx okxx okxx xorx isxx okxx xorx andx okxx xorx isxx okxx xorx okxx okxx xorx`

```input2
1 25
axxx
axxx 5 bxxx bxxx bxxx bxxx bxxx 
bxxx 5 cxxx cxxx cxxx cxxx cxxx 
cxxx 5 dxxx dxxx dxxx dxxx dxxx 
dxxx 5 exxx exxx exxx exxx exxx 
exxx 5 fxxx fxxx fxxx fxxx fxxx 
fxxx 5 gxxx gxxx gxxx gxxx gxxx 
gxxx 5 hxxx hxxx hxxx hxxx hxxx 
hxxx 5 ixxx ixxx ixxx ixxx ixxx 
ixxx 5 jxxx jxxx jxxx jxxx jxxx 
jxxx 5 kxxx kxxx kxxx kxxx kxxx 
kxxx 5 lxxx lxxx lxxx lxxx lxxx 
lxxx 5 mxxx mxxx mxxx mxxx mxxx 
mxxx 5 nxxx nxxx nxxx nxxx nxxx 
nxxx 5 oxxx oxxx oxxx oxxx oxxx 
oxxx 5 pxxx pxxx pxxx pxxx pxxx 
pxxx 5 qxxx qxxx qxxx qxxx qxxx 
qxxx 5 rxxx rxxx rxxx rxxx rxxx 
rxxx 5 sxxx sxxx sxxx sxxx sxxx 
sxxx 5 txxx txxx txxx txxx txxx 
txxx 5 uxxx uxxx uxxx uxxx uxxx 
uxxx 5 vxxx vxxx vxxx vxxx vxxx 
vxxx 5 wxxx wxxx wxxx wxxx wxxx 
wxxx 5 xxxx xxxx xxxx xxxx xxxx 
xxxx 5 yxxx yxxx yxxx yxxx yxxx 
yxxx 5 zxxx zxxx zxxx zxxx zxxx 
```

```output2
161055929
```


## 数据规模与约定

对于 $100\%$ 的数据：

- 保证 $1 \le n\le 10^5$，$0 \le m\le 10^5$
- 保证能翻译完，即能翻译成不会有任何单词能在词典中找到含义的句子。
- 保证词典中的每个单词的含义不超过 $5$ 个单词。

子任务划分：

- 子任务 1（10 分）：保证 $m=0$
- 子任务 2（20 分）：保证词典中每个单词的含义里没有词典中的其他单词。
- 子任务 3（30 分）：保证最终翻译结果不超过 $1000$ 个单词。
- 子任务 4（40 分）：没有特殊限制。