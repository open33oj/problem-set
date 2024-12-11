## 题目背景

啊...啊...啊...啊...啊...啊... ——《云宫迅音》


## 题目描述

这是一道提交答案的题目，一般简称为“提答题”，难度其实远小于 CSPJ 第三题，但考前最后一场了，不为难你们了。

有四道问题，33DAI 分别写了一段代码拿到了满分。但有火眼金睛的你显然能找到他程序的错误，原本的数据也太水了。

请你造出能让他 `WA` 或 `RE` 或 `TLE` 或 `MLE` 的数据，让他拿不到满分吧！

### **问题 1**

【题目描述】：输入两个正整数 $a,b$，输出他们的和。

【输入格式】：一行，空格隔开的两个整数 $a,b$（保证 $1\le a,b\le 10^9$）

【输出格式】：输出他们的和。

【33DAI 的代码（需要 hack 的代码）】

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a % 2 == 1 && b % 2 == 1)
        cout << a + b - 1 << "\n";
    else
        cout << a + b << "\n";
    return 0;
}
```

### **问题 2**

【题目描述】：输入两个正整数 $a,b$，输出他们的和。

【输入格式】：一行，空格隔开的两个整数 $a,b$（保证 $1\le a,b\le 10^{18}$）

【输出格式】：输出他们的和。

【33DAI 的代码（需要 hack 的代码）】

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << a + b;
    return 0;
}
```


### **问题 3**

【题目描述】：输入一个正整数 $a$，判断他是不是质数。

【输入格式】：一行，一个整数 $a$（保证 $1\le a\le 10^6$）

【输出格式】：如果是质数，输出 `Yes`，否则输出 `No`。

【33DAI 的代码（需要 hack 的代码）】

```cpp
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    for (int i = 2; i <= x - 1; i++)
        if (x % i == 0)
            return false;
    return true;
}
int main()
{
    int a;
    cin >> a;
    if (isPrime(a))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
```

### **问题 4**

【题目描述】：输入一个正整数 $a$，判断他是不是质数。

【输入格式】：一行，一个整数 $a$（保证 $2\le a\le 10^{12}$）

【输出格式】：如果是质数，输出 `Yes`，否则输出 `No`。

【33DAI 的代码（需要 hack 的代码）】

```cpp
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    for (int i = 2; i <= x - 1; i++)
        if (x % i == 0)
            return false;
    return true;
}
int main()
{
    int a;
    cin >> a;
    if (isPrime(a))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
```

## 输入格式

输入一行，为一个正整数，表示你的程序当前需要 hack 哪个问题。

本题共四个测试点，输入文件分别包含整数 $1,2,3,4$。

## 输出格式

输出你给对应问题出的输入数据。

你的输出格式应该满足对应题目的输入要求。如果你出的数据满足题目要求，OJ 会用标程生成对应的正确答案，然后对 33DAI 的程序进行测试。

如果 33DAI 的代码会 `WA` 或 `RE` 或 `TLE` 或 `MLE`，那么你将拿到对应的分数。
 
```input1
1
```

```output1
3 5
```

显然第一个问题只要输出两个奇数就会得到错误的和，所以随便输出两个范围内的奇数即可。送大家 $10$ 分。

```input2
2
```

```output2
不告诉你
```


## 得分规定

- 测试点 1：$10$ 分
- 测试点 2：$20$ 分
- 测试点 3：$30$ 分
- 测试点 4：$40$ 分