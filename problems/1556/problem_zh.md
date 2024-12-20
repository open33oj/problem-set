## 题目描述

> BMI（Body Mass Index）指数，简称体质指数，是国际上常用的衡量人体胖瘦程度以及是否健康的一个标准。  

BMI 计算公式为：$BMI=\frac{体重}{身高^2}$。（体重单位：千克；身高单位：米）  

我们认为正常的 BMI 指数为：$18.5\sim 24kg/m^2$。如果超过了 $24$ 就说明偏胖了，如果低于了 $18.5$ 就说明偏瘦了。

现在告诉你 33DAI 的身高 $a$ 米和体重 $b$ 千克，请你算出他的 BMI 指数，并进一步算出他的正常体重范围。

当输出与答案的相对误差或者绝对误差在 $10^{-6}$ 以内时，则认为正确。即假设你输出的实数是 $out$，对应的答案是 $ans$。则当 $|out-ans| \le 10^{-6}$ 或 $|\frac{out-ans}{ans}|\le 10^{-6}$ 时都认为正确。

或者简单来说，保留 $7$ 位小数输出就没问题了。

## 输入格式

第一行两个空格隔开的实数（即小数） $a,b$。含义如题意所述。

## 输出格式

第一行输出一个实数，即 BMI 指数。

第二行输出空格隔开的两个实数，即正常的最低体重与最高体重。

```input1
1.76 77.2
```

```output1
24.92252
57.3056 74.3424
```

## 样例解释

- `77.2 / 1.76 / 1.76 = 24.92252066...` 
- `57.3056 / 1.76 / 1.76 = 18.5` 
- `74.3424 / 1.76 / 1.76 = 24`

## 数据规模与约定

对于 $100\%$ 的数据，$1 \le a \le 3$，$30\le b\le 200$。

- 子任务 1（30 分）：保证 $a=1.76$ 且 $b=77.2$。
- 子任务 2（30 分）：保证 $a=1$
- 子任务 3（40 分）：没有特殊限制