## 题目描述

33DAI 家的电表用 $n$ 个八位数码管显示剩余电量。最近他发现数码管坏了几个二极管，导致显示的结果不可靠。

请你看看根据目前的数码管显示情况，他家的剩余电量有多少种可能性。

---

所谓八位数码管，指的是如下图左边用八个二极管来显示一个数字的电子元件。本题中我们给每个二极管都给了一个数字编号（$1\sim 8$）。

下图右边是数字 $0\sim 9$ 的显示方式，比如对于数字 $7$，就是点亮编号为 $1,2,3$ 的二极管，然后关闭其他二极管得到的。

<img src="file://zealxM4Mog4fkoXjLGNOB.png" width=600 />

---

关于不可靠的显示结果，即有可能某些本来该亮的二极管没有亮，下面是一些例子：

<img src="file://-guzeNO3GXj1TU1rKlCUt.png" width=600 />

## 输入格式

第一行一个整数 $n$，表示有 $n$ 个八位数码管。

接下来 $n$ 行，每行一个长度为 $7$ 的字符串 $s$，第 $i$ 个字符对应着当前数码管中编号为 $i$ 的二极管的情况，为 `Y` 和 `N` 中的一个，分别表示亮和灭。

## 输出格式

一行一个整数，表示剩余电量有多少种可能性。

答案可能很大，只需要输出其对 $988244353$ 取余后的结果即可。

```input1
1
YNNYNNY
```

```output1
6
```

```input2
3
YNYYNYY
YYYYYYY
YYYYNYY
```

```output2
8
```

## 样例解释

<img src="file://pTmXI7I597230Xy_zlU_h.png" width=600 />

## 数据规模与约定

对于 $100\%$ 的数据，保证 $n\le 50$。

- 子任务 1（30 分）：保证 $n=1$。
- 子任务 2（30 分）：保证 $n=2$。
- 子任务 3（40 分）：没有特殊限制。

## %￥&@#

受近期 X8.7 级太阳耀斑影响，33DAI 出题时用到的一段代码被错误地传输到了题面中：

```cpp
#include <bits/stdc++.h>
using namespace std;
string s[10] = {
    "YYYYYYN","NYYNNNN","YYNYYNY","YYYYNNY","NYYNNYY",
    "YNYYNYY","YNYYYYY","YYYNNNN","YYYYYYY","YYYYNYY"};
int main()
{
    for (int i = 0; i <= 9; i++)
    {
        if (s[i][0] == 'Y') cout << " **** \n"; else cout << "      \n";
        for (int j = 1; j <= 2; j++)
        {
            if (s[i][5] == 'Y') cout << "*"; else cout << " ";
            cout << "    ";
            if (s[i][1] == 'Y') cout << "*\n"; else cout << " \n";
        }
        if (s[i][6] == 'Y') cout << " **** \n"; else cout << "      \n";
        for (int j = 1; j <= 2; j++)
        {
            if (s[i][4] == 'Y') cout << "*"; else cout << " ";
            cout << "    ";
            if (s[i][2] == 'Y') cout << "*\n"; else cout << " \n";
        }
        if (s[i][3] == 'Y') cout << " **** \n"; else cout << "      \n";
        cout << "--------\n";
    }
    return 0;
}
```
