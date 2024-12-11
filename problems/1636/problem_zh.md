## 题目背景

信而安之，阴以图之。备而后动，勿使有变。刚中柔外也。

## 题目描述

33DAI 拿到了一副 $n$ 行 $m$ 列的二维字符画，字符画中的 $n\times m$ 个字符都是 $26$ 个小写英文字母中的一个。33DAI 认为 `v` 是个笑脸，而如果有一些 `v` 构成了一个开口朝着左上方的直角，就认为这是一把刀。比如下面的所有 `v` 就构成了一个开口朝着左上方的直角：

```
oooov
oooov
ovvvv
```

形式化的说，如果有一个 `v` 左边有连续的不少于一个 `v`，上面也有连续的不少于一个 `v`，那么这些 `v` 就构成了一个开口朝着左上方的直角，33DAI 就认为是一把刀。

33DAI 认为只要形状不同或者位置不同就是不同的刀，所以上面的那个例子中有 $6$ 把刀。（下面展现了那六把刀的位置，和刀无关的部分都用 `o` 表示了。）

```
ooooo  oooov  ooooo  oooov  ooooo  oooov  
oooov  oooov  oooov  oooov  oooov  oooov  
ooovv  ooovv  oovvv  oovvv  ovvvv  ovvvv  
```

现在给你一个 $n$ 行 $m$ 列的二维字符画，请你数数有多少把刀吧！

## 输入格式

第一行为两个整数 $n,m$。

接下来 $n$ 行，每行有 $m$ 个字符，即 $n\times m$ 的字符画。

## 输出格式

一个整数，即刀的数量。

```input1
3 5
oooov
oovov
ovvvv
```

```output1
7
```

在题目描述的基础上多加了一把刀，新刀的位置是：

```
ooooo
oovoo
ovvoo
```

```input2
3 5
vvoov
vooov
ovvvv
```

```output2
6
```
虽然多了一个直角，但是这个直角的开口是朝右下的，所以没有多出来的刀。

```input3
3 3
vvv
vvv
vvv
```

```output3
9
```

```input4
10 10
vvvvvoovvv
oovvvvvvvv
ovvvvvvooo
vvvvooovvv
vvvvvvvvvv
vvvvvvvvvv
vvvvvvvvvv
vvvvvvvvvv
vvvvvvovvv
vvvvvvvvvv
```

```output4
850
```

## 数据规模与约定

对于 $100\%$ 的数据，$1 \le n,m \le 2000$。

- 子任务 1（10 分）：保证 $n=m=2$。
- 子任务 2（20 分）：保证 $n=2$。
- 子任务 3（30 分）：保证 $1\le n,m\le 100$。
- 子任务 4（40 分）：没有特殊限制。