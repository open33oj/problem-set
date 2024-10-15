#include "testlib.h"
using namespace std;
const int N=2e5+10;
long long n,a[N];
int k;
int p[N];
int main(int argc,char *argv[])
{
	registerTestlibCmd(argc,argv);
	n=inf.readInt(1,200'000,"n");
	inf.readEoln();
	for(int i=1;i<=n;i++)
	{
		a[i]=inf.readInt(1,1'000'000'000,"a_i");
		if(i!=n)inf.readSpace();
	}
	int mxk=ans.readInt(0,n,"mxk");
	k=ouf.readInt(0,n,"k");
	if(k!=mxk)
	{
		quitf(_wa,"Your k is %d, but the answer is %d",k,mxk);
	}
// 	ouf.readEoln();
	for(int i=1;i<=k;i++)
	{
		int v[3]={0,0,0};
		for(int j=0;j<3;j++)
		{
			v[j]=ouf.readInt(1,n,"v_j");
		}
// 		if(i!=k)ouf.readEoln();
		sort(v,v+3);
		if ((a[v[0]]+a[v[1]]+a[v[2]])%3!=0) quitf(_wa,"The sum of the %d-th group \%3!=0",i);
		for(int j=0;j<2;j++)
			if(v[j]==v[j+1])
			{
				quitf(_wa,"The %d-th group includes 2 same children",i);
			}
		for(int j=0;j<3;j++)
			if(p[v[j]])
			{
				quitf(_wa,"The %d-th children is in the %d-th group and the %d-th group",v[j],p[v[j]],i);
			}
		for(int j=0;j<3;j++)
			p[v[j]]=i;
	}
	quitf(_ok,"You gave a right solution");
	return 0;
}

