## 题目描述

本题空间限制为 $128$ MiB，按照官方的评测方式，下面这段代码的提交需要得到 $0$ 分。

如果提交这段代码得到了 `AC` 的结果，则说明当前 OJ 环境与比赛评测环境不一致。

```cpp
#include<bits/stdc++.h>
using namespace std;
int a[40000000];
signed main(){
    cout << "Hello World\n";
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

## 背景

在 2023 年的 NOI 春季测试 的第二题《幂次》中，下面的代码的成绩为 $0$ 分。

显然在原题的空间限制 $1024$ MiB 下，这个代码中的数组 `a` 超过了空间限制。但是很多 OJ 都没有能还原出 $0$ 分。和 Hydro 开发组反馈后，Hydro 框架下能够成功复现这个 $0$ 分了。

本题就是一个比较简单的最小的可重现示例。

```cpp
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=4e8;
signed a[N];
signed main(){
	freopen("power.in","r",stdin);
	freopen("power.out","w",stdout);
	int n,k;
	cin>>n>>k;
	if(k==1)
	{
		cout<<n;
		return 0; 
	}
	int m=n,ans=0;
	while(m!=0)
	{
		m/=10;
		ans++;
	}
	if(ans%k!=0)ans=ans/k+1;
	else ans/=k;
	m=1;
	for(int i=0;i<ans;i++)m*=10;
	for(int i=2;i<=m;i++)
	{
		if(a[i]==0)
		{
			for(int j=i*i;j<=m;j*=i)a[j]=1;
		}
	}
	int j=0;
	for(int i=2;i<=m;i++)
	{
		if(a[i]==0)
		{
			a[j]=i;
			j++;
		}
	}
	int sum=1;
	for(int i=0;i<j;i++)
	{
		int ans=pow(a[i],k),ret=k,t=0;
		if(ans>n)continue;
		while(pow(ans,2)<=n)
		{
			ans=pow(ans,2);
			ret*=2;
			t++;
		}
		while(ans*a[i]<=n)ans*=a[i],ret++,t++;
		ret=ret-k+1;
		if(t==0)ret=1;
		sum+=ret;
	}
	cout<<sum;
	return 0;
}
```