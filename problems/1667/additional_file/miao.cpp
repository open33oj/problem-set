#include <bits/stdc++.h>
using namespace std;
const int MAXMIAO = 10000;
const int MAXLEN = 1000;
const int MAXOP = 1000000;
const bool DEBUG = false; // �������Ϊ�漴�ɿ�ʼ����ģʽ
int opCnt;				  // �����������
int tot;				  // ���㵱ǰ�б���
int IP;					  // ����
int E[MAXLEN + 5];		  // ��ǰ�б� E[0]~E[tot-1]

string OP_NAME[11] = {"RET", "MEOW", "PUSH", "POP",
					  "LOAD", "SAVE", "ADD", "SUB", "JMP", "JE", "NOP"};
void _debug()
{
	if (!DEBUG)
		return;
	// ����
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
	// ���������������Դ������ `miao.txt` �ļ���
	// Ȼ��� `miao.txt` �ŵ����������ͬ����Ŀ¼�¼�������
	freopen("miao.txt", "r", stdin);

	// �������
	char temp[5]; // ��ʱ��ȡ�ַ�
	int now = 0;  // ��ǰ�������
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
			// ���� ��ӡһ�����з�
			cout << "\n";
			IP++;
		}
		else if (E[IP] == 1)
		{
			// �� ��� T ֻСè��
			for (int i = 1; i <= E[tot - 1]; i++)
				cout << "M"; // ������ M ��ʾСè��
			IP++;
		}
		else if (E[IP] == 2)
		{
			// ѹ�� ���б�ĩβ���һ���ӵ�����Ϊ N
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
			// ���� ɾ���б�ĩβ
			tot--;
			IP++;
		}
		else if (E[IP] == 4)
		{
			// ���� �� E(N) ѹ���б�ĩβ
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
			// ���� �� E(N) �޸�Ϊ�б�ĩβ��Ԫ�ص�ֵ
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
			// �ӷ�
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
			// ����
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
			// ��ת	�� IP ����Ϊ N
			if (IP == tot - 1)
			{
				cout << "No N!";
				return 0;
			}
			IP = E[IP + 1];
		}
		else if (E[IP] == 9)
		{
			// �Ƚ�	����б����һ���� 0���� IP ����Ϊ N����������Ϊ IP+2
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
