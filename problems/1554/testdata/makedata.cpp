#include<bits/stdc++.h>
#define maxn 200005
#define ll long long
using namespace std;
mt19937 rnd(time(NULL)^clock());
ll rad(int x,int y){
	return rnd()%(y-x+1)+x;
}
ll rad2(ll x,ll y)
{
	return (rad(1,1000000000)*1000000000ll+rad(1,1000000000))%(y-x+1)+x;
}
int n,k=100000;
int f[maxn];
int get()
{
	int vis[15][15]; memset(vis,0,sizeof(vis));
	int A=0,B=0,a=0,b=0;
	while (true)
	{
		vis[a][b]=1;
		for (int i=0;i<k;i++)
		{
			if (f[i]==0) a++; else b++;
			if (a==11 || b==11)
			{
				if (abs(a-b)<2) return 1;
				if (a==11) A++; else B++;
				a=b=0;
			}
		}
		if (vis[a][b]) return 0;
		vis[a][b]=1;
	}
	return 0;
}
void init(int l,int t)
{
	for (int i=0;i<k;i++) if(rad(1,t)<=l) f[i]=0; else f[i]=1;
}
int main()
{
	int cas=0;
	srand(time(0));
	char ch[15]="data00.in";
	for (char cc='0';cc<='1';cc++) 
	for (char dd='0';dd<='9';dd++)
	{
		cas++;
		ch[4]=cc; ch[5]=dd;
		freopen(ch,"w",stdout);
		if (cas==1)
		{
			cout<<rad(1,10000000)<<" "<<3<<endl;
			cout<<"AAA"<<endl;
			continue;
		}
		if (cas>=19)
		{
			ll k=99999; if (cas==20) k++;
			cout<<rad2(1,1e18)<<" "<<k<<endl;
			for (int i=1;i<=k-10;i++) if (i&1) cout<<"A"; else cout<<"B";
			for (int i=k-10+1;i<=k;i++) if(rad(1,2)==1) cout<<"A"; else cout<<"B";
			cout<<endl;
			continue;
		}
		if (cas<=6)
			init(1,2); //按1:1的概率生成 
		else
		if (cas>=7 && cas<=12)
		{
			//1代表遇到过11:11,0代表没遇到过 
			init(1,6);
			while (get()==1) init(1,6);
		}
		else
		{
			init(1,2); 
			int tt=0;
			for (int i=k-1000;i<=k;i++) f[i]=tt,tt=1-tt;
		}
		ll n;
		if (cas<=6) n=rad(1,10000000); else n=rad2(1,1e18);
		if (cas>=13 && cas<=15) n=n/k*k;
		cout<<n<<" "<<k<<endl;
		for (int i=0;i<k;i++) if (f[i]==0) cout<<"A"; else cout<<"B";
		cout<<endl;
	}
}
