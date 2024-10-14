#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x, y, z, typA, sumA;
	int a, b, c, typB, sumB;
	cin >> x >> y >> z;
	cin >> a >> b >> c;
	// 先排个序方便后续操作
	if (x > y)
		swap(x, y);
	if (x > z)
		swap(x, z);
	if (y > z)
		swap(y, z);
	if (a > b)
		swap(a, b);
	if (a > c)
		swap(a, c);
	if (b > c)
		swap(b, c);
	// 判断类型与计算数字和
	sumA = x + y + z;
	if (x == y && y == z)
		typA = 1;
	else if (x + 1 == y && y + 1 == z)
		typA = 2;
	else if (x == y || y == z || x == z)
		typA = 3;
	else
		typA = 4;
	sumB = a + b + c;
	if (a == b && b == c)
		typB = 1;
	else if (a + 1 == b && b + 1 == c)
		typB = 2;
	else if (a == b || b == c || a == c)
		typB = 3;
	else
		typB = 4;
	// 判断胜负
	if (typA == 1 && a == 2 && b == 3 && c == 5)
		cout << "B"; // 特殊情况 1
	else if (typB == 1 && x == 2 && y == 3 && z == 5)
		cout << "A"; // 特殊情况 2
	else if (typA == typB && sumA == sumB)
		cout << "B"; // 平局
	else if (typA < typB || (typA == typB && sumA > sumB))
		cout << "A"; // A 常规获胜规则
	else
		cout << "B"; // A 没获胜的情况
	return 0;
}