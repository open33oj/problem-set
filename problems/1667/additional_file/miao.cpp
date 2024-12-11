#include <bits/stdc++.h>
using namespace std;
const int MAXMIAO = 10000;
const int MAXLEN = 1000;
const int MAXOP = 1000000;
const bool DEBUG = false; // 把这个改为真即可开始调试模式
int opCnt;				  // 计算操作次数
int tot;				  // 计算当前列表长度
int IP;					  // 如题
int E[MAXLEN + 5];		  // 当前列表 E[0]~E[tot-1]

string OP_NAME[11] = {"RET", "MEOW", "PUSH", "POP",
					  "LOAD", "SAVE", "ADD", "SUB", "JMP", "JE", "NOP"};
void _debug()
{
	if (!DEBUG)
		return;
	// 调试
	cout << "\n";
	cout << IP << " " << OP_NAME[min(10, E[IP])] << ":\n";
	for (int i = 0; i < tot; i++)
	{
		cout << E[i];
		if (i == IP)
			cout << "<";
		else
			cout << " ";
	}
	cout << "\n";
}
int main()
{
	// 把你的喵喵编程语言代码放入 `miao.txt` 文件中
	// 然后把 `miao.txt` 放到和这个代码同样的目录下即可运行
	freopen("miao.txt", "r", stdin);

	// 读入代码
	char temp[5]; // 临时读取字符
	int now = 0;  // 当前语句数字
	int sum = 0;
	while (cin >> temp[0])
	{
		if (temp[0] == 'M')
		{
			cin >> temp[1] >> temp[2] >> temp[3];
			if (temp[1] != 'i' || temp[2] != 'a' || temp[3] != 'o')
			{
				cout << "not miao";
				return 0;
			}
			now++;
			sum++;
		}
		else if (temp[0] == ';')
		{
			E[tot++] = now;
			now = 0;
		}
		else
		{
			cout << "bad char";
			return 0;
		}
		if (sum > MAXMIAO)
		{
			cout << "Too Many Miao!";
			return 0;
		}
	}
	if (tot > MAXLEN)
	{
		cout << "too long";
		return 0;
	}
	IP = 0;
	opCnt = 0;
	while (0 <= IP && IP < tot && tot >= 1)
	{
		_debug();
		if (E[IP] == 0)
		{
			// 换行 打印一个换行符
			cout << "\n";
			IP++;
		}
		else if (E[IP] == 1)
		{
			// 喵 输出 T 只小猫咪
			for (int i = 1; i <= E[tot - 1]; i++)
				cout << "M"; // 这题用 M 表示小猫咪
			IP++;
		}
		else if (E[IP] == 2)
		{
			// 压入 在列表末尾添加一项，添加的数字为 N
			if (IP == tot - 1)
			{
				cout << "No N!";
				return 0;
			}
			E[tot++] = E[IP + 1];
			IP += 2;
		}
		else if (E[IP] == 3)
		{
			// 弹出 删除列表末尾
			tot--;
			IP++;
		}
		else if (E[IP] == 4)
		{
			// 载入 把 E(N) 压入列表末尾
			if ((IP == tot - 1) || (E[IP + 1] < 0) || (tot <= E[IP + 1]))
			{
				cout << "NO N or E(N)!";
				return 0;
			}
			int N = E[IP + 1];
			E[tot++] = E[N];
			IP += 2;
		}
		else if (E[IP] == 5)
		{
			// 储存 把 E(N) 修改为列表末尾的元素的值
			if ((IP == tot - 1) || (E[IP + 1] < 0) || (tot <= E[IP + 1]))
			{
				cout << "NO N or E(N)!";
				return 0;
			}
			int N = E[IP + 1];
			E[N] = E[tot - 1];
			IP += 2;
		}
		else if (E[IP] == 6)
		{
			// 加法
			if (tot < 2)
			{
				cout << "only 1 number!";
				return 0;
			}
			int x = E[tot - 2] + E[tot - 1];
			tot -= 2;
			E[tot++] = x;
			IP++;
		}
		else if (E[IP] == 7)
		{
			// 减法
			if (tot < 2)
			{
				cout << "only 1 number!";
				return 0;
			}
			int x = max(0, E[tot - 2] - E[tot - 1]);
			tot -= 2;
			E[tot++] = x;
			IP++;
		}
		else if (E[IP] == 8)
		{
			// 跳转	将 IP 设置为 N
			if (IP == tot - 1)
			{
				cout << "No N!";
				return 0;
			}
			IP = E[IP + 1];
		}
		else if (E[IP] == 9)
		{
			// 比较	如果列表最后一项是 0，将 IP 设置为 N，否则设置为 IP+2
			if (IP == tot - 1)
			{
				cout << "No N!";
				return 0;
			}
			if (E[tot - 1] == 0)
				IP = E[IP + 1];
			else
				IP += 2;
		}
		else
		{
			IP++;
		}

		if (tot > MAXLEN)
		{
			cout << "too long";
			return 0;
		}
		opCnt++;
		if (opCnt > MAXOP)
		{
			cout << "too many op";
			return 0;
		}
	}
	return 0;
}
