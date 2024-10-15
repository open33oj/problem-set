#include <bits/stdc++.h>
#define maxn 1000005
#define ll long long
#define mod 998244353
using namespace std;
int n;
vector<int> a[3];
int x,best,f;
int get(int x)
{
	for (int i=0;i<=2;i++) if (a[i].size()<x) return 0;
	int ret=x;
	for (int i=0;i<=2;i++) ret+=(a[i].size()-x)/3;
	return ret;
}
int main()
{
	cin>>n;
	for (int i=1;i<=n;i++) {cin>>x; a[x%3].push_back(i);}
	for (int i=0;i<=2;i++)
	{
		int tt=get(i);
		if (tt>best) {best=tt; f=i;}
	}
	cout<<best<<endl;
	for (int i=1;i<=f;i++)
	{
		for (int j=0;j<=2;j++) {cout<<a[j][a[j].size()-1]<<" "; a[j].pop_back();}
		cout<<endl;
	}
	for (int i=0;i<=2;i++)
	{
		while (a[i].size()>=3)
		{
			int siz=a[i].size();
			cout<<a[i][siz-1]<<" "<<a[i][siz-2]<<" "<<a[i][siz-3]<<endl;
			a[i].pop_back(); a[i].pop_back(); a[i].pop_back();
		}
	}
	return 0;
}

