## 题目描述

下面这段代码在比赛时会得到 `WA` 的错误。而在绝大多数 OJ 都能拿到满分（包括目前的 33 OJ）。

如果提交这段代码得到了 `AC` 的结果，则说明当前 OJ 环境与比赛评测环境不一致。

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
	cout << "Hello World\r";
	return 0;
}
```

CCF 文件对比的“忽略行末空格和文末换行”是不会忽略 `\r` 的，只会忽略 `\n`。但目前看来绝大多数 OJ 都是同时忽略所有 `\r` 和 `\n`。

（显然你可以通过提交正常的 `Hello World` 正确地程序拿到这题满分。

## 输入格式

无输入

## 输出格式

输出 `Hello World`

```input1
```

```output1
Hello World
```
