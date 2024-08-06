## 题目描述

根据 https://noi.cn/gynoi/jsgz/2021-07-16/732450.shtml

NOI 系列赛事的评测环境中，`C++` 语言的编译器 `G++` 应该是 `9.3.0` 版本，即下方代码的输出应该是 `9.3.0`。

如果提交这段代码得到非 `AC` 的结果，则说明当前 OJ 环境与比赛评测环境不一致。

```cpp
#include <iostream>
int main()
{
    std::cout << __GNUC__ << "."
              << __GNUC_MINOR__ << "."
              << __GNUC_PATCHLEVEL__ << "\n";
    return 0;
}
```
## 输入格式

无

## 输出格式

输出 `9.3.0`

```input1
```

```output1
9.3.0
```
