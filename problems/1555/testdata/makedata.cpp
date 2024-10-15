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
int n,q,k;
int a[maxn];
int num0,num1,num2;
void work(int cas,int mn)
{
	//=0 =1 =2µÄ¸öÊý
	num0++;
	if (num0==2) {num0=0; num1++;}
	if (num1==2) {num1=0; num2++;}
	int x=rad(1,mn/2)+num0,y=rad(1,mn/2)+num1,z=rad(1,mn/2)+num2;
	while (x+y+z>mn)
	{
		int tp=rad(1,3);
		if (tp==1 && x>3) x-=3;
		if (tp==2 && y>3) y-=3;
		if (tp==3 && z>3) z-=3;
	}
	int t=0;
	for (int i=1;i<=x;i++) a[++t]=rad(1,90000)+num0;
	for (int i=1;i<=y;i++) a[++t]=rad(1,90000)+num1;
	for (int i=1;i<=z;i++) a[++t]=rad(1,90000)+num2;
	random_shuffle(a+1,a+x+y+z+1); 
	cout<<x+y+z<<endl;
	for (int i=1;i<=x+y+z;i++) cout<<a[i]<<" ";
	cout<<endl;
	return;
}
int main()
{
	int cas=0;
	srand(time(0));
	char ch[15]="data00.in";
	for (char cc='0';cc<='1';cc++) 
	for (char dd='0';dd<='9';dd++)
	{
		ch[4]=cc; ch[5]=dd;
		freopen(ch,"w",stdout);
		cas++;
		if (cas<=6) work(cas,20); else work(cas-6,100000); 
	}
}
