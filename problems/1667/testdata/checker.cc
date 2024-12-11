#include "testlib.h"

using namespace std;
const int MAXMIAO = 10000;
const int MAXLEN = 1000;
const int MAXOP = 1000000;
int n;             // 规定的数
int nn;            // 输出的 M 的数量
int opCnt;         // 计算操作次数
int tot;           // 计算当前列表长度
int IP;            // 如题
int E[MAXLEN + 5]; // 当前列表 E[0]~E[tot-1]
bool check()
{
    // 读入代码
    char temp[5]; // 临时读取字符
    int now = 0;  // 当前语句数字
    int sum = 0;
    while (1)
    {
        temp[0] = ouf.readChar();
        if (temp[0] == -1 || isEof(temp[0]))
            break;
        if (temp[0] == 'M')
        {
            temp[1] = ouf.readChar();
            temp[2] = ouf.readChar();
            temp[3] = ouf.readChar();
            if (temp[1] != 'i' || temp[2] != 'a' || temp[3] != 'o')
                quitf(_wa, "not miao!");
            now++;
            sum++;
        }
        else if (temp[0] == ';')
        {
            E[tot++] = now;
            now = 0;
        }
        else if (!isBlanks(temp[0]))
            quitf(_wa, "bad char %d", temp[0]);
        if (sum > MAXMIAO)
            quitf(_wa, "Too Many Miao!");
    }
    if (tot > MAXLEN)
        quitf(_wa, "too long");
    IP = 0;
    opCnt = 0;
    nn = 0;
    while (0 <= IP && IP < tot && tot >= 1)
    {
        if (E[IP] == 0)
        {
            // 换行 打印一个换行符
            quitf(_wa, "don't print end line!");
            IP++;
        }
        else if (E[IP] == 1)
        {
            // 喵 输出 T 只小猫咪
            nn += E[tot - 1];
            IP++;
        }
        else if (E[IP] == 2)
        {
            // 压入 在列表末尾添加一项，添加的数字为 N
            if (IP == tot - 1)
                quitf(_wa, "No N!");
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
                quitf(_wa, "NO N or E(N)!");
            int N = E[IP + 1];
            E[tot++] = E[N];
            IP += 2;
        }
        else if (E[IP] == 5)
        {
            // 储存 把 E(N) 修改为列表末尾的元素的值
            if ((IP == tot - 1) || (E[IP + 1] < 0) || (tot <= E[IP + 1]))
                quitf(_wa, "NO N or E(N)!");
            int N = E[IP + 1];
            E[N] = E[tot - 1];
            IP += 2;
        }
        else if (E[IP] == 6)
        {
            // 加法
            if (tot < 2)
                quitf(_wa, "only 1 number!");
            int x = E[tot - 2] + E[tot - 1];
            tot -= 2;
            E[tot++] = x;
            IP++;
        }
        else if (E[IP] == 7)
        {
            // 减法
            if (tot < 2)
                quitf(_wa, "only 1 number!");
            int x = max(0, E[tot - 2] - E[tot - 1]);
            tot -= 2;
            E[tot++] = x;
            IP++;
        }
        else if (E[IP] == 8)
        {
            // 跳转	将 IP 设置为 N
            if (IP == tot - 1)
                quitf(_wa, "No N!");
            IP = E[IP + 1];
        }
        else if (E[IP] == 9)
        {
            // 比较	如果列表最后一项是 0，将 IP 设置为 N，否则设置为 IP+2
            if (IP == tot - 1)
                quitf(_wa, "No N!");
            if (E[tot - 1] == 0)
                IP = E[IP + 1];
            else
                IP += 2;
        }
        else
            IP++;

        if (tot > MAXLEN)
            quitf(_wa, "too long");
        opCnt++;
        if (opCnt > MAXOP)
            quitf(_wa, "too many op");
    }
    if (nn == n)
        quitf(_ok, "Miao!");
    else
        quitf(_wa, "Miao?");
}

int main(int argc, char *argv[])
{
    registerTestlibCmd(argc, argv);
    n = inf.readInt();
    check();
}