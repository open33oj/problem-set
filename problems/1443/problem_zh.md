## 题目描述

下面这段代码在比赛时会得到 `RE` 的错误。而在 DevC++ 的是能成功运行的。

如果提交这段代码得到了 `AC` 的结果，则说明当前 OJ 环境与比赛评测环境不一致。

```cpp
#include<bits/stdc++.h>
using namespace std;
int f(){
	cout << "Hello World";
} 
int main(){
	f();
	return 0;
}
```

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
