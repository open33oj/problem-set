#include <bits/stdc++.h>
#define maxn 1000005
#define ll long long
#define mod 998244353
using namespace std;
ll t[17][17];
ll sa[17][17],sb[17][17];
ll n,k;
string s;
ll a=0,b=0,A=0,B=0;
ll tim=0;
void moni()
{
	for (int i=0;i<k;i++)
	{
		tim++;
		if (s[i]=='A') a++; else b++;
		if (max(a,b)>=11 && abs(a-b)>=2)
		{
			if (a>b) A++; else B++;
			a=b=0;	
		}
		if (tim==n) {cout<<A<<":"<<B<<endl; exit(0);}
	}
}
int main()
{
	cin>>n>>k; 
	cin>>s;
	memset(t,-1,sizeof(t));
	t[0][0]=0;
	while (true)
	{
		moni();
		if (a==b && a>11) a=b=11;
		if (min(a,b)>=11 && a!=b) {if (a>b) a=12,b=11; else a=11,b=12;}
		if (t[a][b]!=-1) //曾经出现过 
		{
			ll da=A-sa[a][b],db=B-sb[a][b]; //deltaA,deltaB
			ll zhouqi=tim-t[a][b]; //周期大小
			ll quan=(n-tim)/zhouqi;
			A+=da*quan; B+=db*quan;
			tim+=quan*zhouqi;
			if (tim==n) {cout<<A<<":"<<B<<endl; return 0;}
			while (true) moni();
		}
		else
		{
			t[a][b]=tim; sa[a][b]=A; sb[a][b]=B;
		}
	}
	return 0;
}
