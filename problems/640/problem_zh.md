## 题目描述

输入一个只包含小写英文字母的字符串 $s$。  
你需要编写两份代码：`a.cpp` 与 `b.cpp`，并将它们以 `zip` 格式添加到一个压缩包（不用放在额外文件夹里；压缩包名称随意，如 `ans.zip`），然后通过提交文件的形式提交压缩包。

程序的评测按照以下步骤进行：
1. 解压得到两个代码，编译后得到两个程序：`a` 与 `b`。  
2. 以 $s$ 作为输入运行程序 `a`，记得到的输出为 $s_1$。  
3. 以 $s_1$ 作为输入运行程序 `b`，记得到的输出为 $s_2$。
4. 如果 $s = s_2$ 且 $s \neq s_1$ 即视为正确，否则视为错误。

注意：正式比赛中一般裁判会看一下每个程序来规避作弊的问题。

## 数据规模与约定

对于 $100\%$ 的数据，$0 < |s| \le 100$。

## 参考代码

如下代码可以通过本题

### a.cpp

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    cout << "###" << s;
    return 0;
}
```

### b.cpp

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '#')
            continue;
        else
            cout << s[i];
    return 0;
}
```