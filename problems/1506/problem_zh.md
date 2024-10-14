## 题目描述

33dai举办了一个趣味的编程比赛，趣味编程比赛的规则是组队制的。TooY0ung帮助33dai制定了奖项的分配规则：

关于获金、银、铜奖队伍具体数量的计算方法

​设有效参赛队伍数为 A 支，则：

​获金($gold$)奖队伍数为：J = (A*10%)结果上取整；

​获银($silver$)奖队伍数为：Y = (A*30%)结果上取整 – J；

​获铜($bronze$)奖队伍数为：T = (A*60%)结果上取整 – Y - J;

有效参赛队伍定义为至少提交通过 1 个题目的正式参赛队伍，非正式参赛队伍为打星队伍，其标志为队伍名最后一个字符为 *

现在你想知道一场比赛的获奖情况

**排名细则**

所有正式参赛的参赛队按照解题数多少进行排名，解题数多的排名在前；若解题数相同，再比较总用时，总用时少的排名在前。

## 输入格式

第一行一个整数 $n$。表示参赛队伍数量

下面 $n$ 行，每行包含两个字符串 $school（学校）、team（队伍名），除打星队伍外，所有参赛队伍最后一个字符均不为*)$，两个整数 $solved（通过题目数）, time（总用时）$，

保证 $school,team$ 中只出现小写英文字母以及 \* 。保证 $time$ 各不相同。

最后一行包括一个字符串$s$表示查看金牌或者银牌或者铜牌的获奖情况，$s$只有$gold、silver、bronze$三种情况

## 输出格式

第一行输出获得$s$奖的总人数$x$

接下来$x$行输出获得$s$奖的队伍以及队伍信息（学校、队伍名、通过题目数、总用时）。

```input1
15
nanjingdaxue chuochuorangchuochuobie 9 1148
qinghuadaxue sangedinglia 11 1340
beijingdaxue nishizi 10 780
qinghuadaxue  miaomiaomiaomiaomiaomiaomiao 10 1126
xianjiaotongdaxue chabuduodele 10 1211
nanjingyoudiandaxue Cirtrus 10 1361
zhejiangdaxue SolitaryDream 8 788
tengxun tengxundaibiaodui* 8 842
kuangshi kuangshidaibiaodui* 8 1251
changchunligongdaxue dlrowollehstup 3 324
beijingdaxue chongshengzhiwoshicaigou 12 1036
beijingdaxue daidainiao 12 1230
qinghuadaxue sangedingxiang 12 2030
beijingdaxue chongshengcaigou 11 1523
beijingligongdaxue ddlzhanshen 10 1623
gold
```

```output1
2
beijingdaxue chongshengzhiwoshicaigou 12 1036
beijingdaxue daidainiao 12 1230
```

## 数据规模与约定

对于 $100\%$ 的数据，$1\leq n \leq2* 10^5$，
$1\leq |school|,|team| \leq 30$，$|school|表示字符串长度$

$0 \leq solved \leq 13,0 \leq time \leq 2^{31}-1$

- 子任务 1（30 分）：所有的队伍保证解题数不相同且按照解题数从大到小给出。
- 子任务 2（30 分）：保证字符串$s$是$gold$
- 子任务 3（40 分）：没有特殊限制

