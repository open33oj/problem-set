## 题目描述

33 喜欢用五个字符表示当前时间：`HH:MM`。其中 `HH` 表示小时，`MM` 表示分钟。如果小时数或分钟数为一位数，则补一个 `0`，比如 `03:09`。

33 和小伙伴 CC 不在同一个时区。33 在 $+8$ 时区， CC 在 $-7$ 时区。简单来说，CC 的时间为 33 时间往前调 $15$ 个小时。

现在给出 33 当前的时间，请求出 CC 当前的时间。即求 33 所在时间的 $15$ 个小时之前是什么时间。

## 输入格式

输入五个字符，为 33 当前的时间。

## 输出格式

输出五个字符，为 CC 当前的时间。

```input1
23:15
```

```output1
08:15
```

```input2
15:30
```

```output2
00:30
```

```input3
08:30
```

```output3
17:30
```

## 数据规模与约定

对于 $100\%$ 的数据，保证时间合法（即为 `00:00` 到 `23:59` 之间）。

- 子任务 1（30 分）：保证输入时间为 `20:14`。
- 子任务 2（30 分）：保证 `HH` 所表示的时间为 `15` 到 `23` 之间。
- 子任务 3（40 分）：没有特殊限制。