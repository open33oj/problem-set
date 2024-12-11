## 题目描述

下面这段代码在比赛时会得到 `CE` 的错误。而在 DevC++ 和很多场景下是能成功运行的。

如果提交这段代码得到了 `AC` 的结果，则说明当前 OJ 环境与比赛评测环境不一致。

```cpp
#include <bits/stdc++.h>
using namespace std;
struct Point
{
	int x, y;
	operator<(const Point & a) const
	{
		return x > a.x;
	}
};
int main()
{
	cout << "Hello World";
	return 0;
}
```

正确的写法是在重载运算符函数前面写清楚返回值为 `bool` 类型。

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
