## 题目描述

33DAI 拿到了一篇没有标点符号，只包含小写英文字母英文文章。文章中所有单词之间都用恰好一个空格隔开。

学过了系动词的 33DAI 发现了这篇文章很多系动词都用错了。和现实世界不同，33DAI 学习的系动词规则如下：

- `am`, `are`, `is` 三个单词都是系动词。
- 系动词必然跟在某个单词的后面。
- 如果跟在 `i` 后面，则应该使用 `am`。
- 如果跟在 `you` 后面，则应该使用 `are`。
- 如果跟在其他任何单词后面，则都应该使用 `is`。

请你帮他把文章中的系动词都改成正确的，然后输出吧。

## 输入格式

一行，即那篇文章。

## 输出格式

一行，即改完错误后的那篇文章。

```input1
i is a boy you are a girl and it am a cat
```

```output1
i am a boy you are a girl and it is a cat
```

## 数据规模与约定

对于 $100\%$ 的数据，保证整篇文章的单词数量小于 $100$，每个单词长度都小于等于 $5$。

- 子任务 1（30 分）：整篇文章除了系动词外的单词都是 `cat`。
- 子任务 2（30 分）：文章恰好由 $10$ 个单词组成。
- 子任务 3（40 分）：无特殊限制。