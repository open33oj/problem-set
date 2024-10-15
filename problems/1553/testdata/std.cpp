#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int ans = 0;
	for(int a=0;a<=3;a++)
	for(int b=0;b<=3;b++)
	for(int c=0;c<=3;c++)
	for(int d=0;d<=3;d++)
	for(int e=0;e<=3;e++)
	for(int f=0;f<=3;f++)
	for(int g=0;g<=3;g++)
	{
		int sun = 0, power = 0;
		
		if(a==1) sun+=150,power+=300;
		if(b==1) sun+=150,power+=300;
		if(c==1) sun+=150,power+=300;
		if(d==1) sun+=150,power+=300;
		if(e==1) sun+=150,power+=300;
		if(f==1) sun+=150,power+=300;
		if(g==1) sun+=150,power+=300;

		if(a==2) sun+=888,power+=1600;
		if(b==2) sun+=888,power+=1600;
		if(c==2) sun+=888,power+=1600;
		if(d==2) sun+=888,power+=1600;
		if(e==2) sun+=888,power+=1600;
		if(f==2) sun+=888,power+=1600;
		if(g==2) sun+=888,power+=1600;
		
		if(a==3) sun+=275,power+=600;
		if(b==3) sun+=275,power+=600;
		if(c==3) sun+=275,power+=600;
		if(d==3) sun+=275,power+=600;
		if(e==3) sun+=275,power+=600;
		if(f==3) sun+=275,power+=600;
		if(g==3) sun+=275,power+=600;

		if(sun<=n && power>=m) ans++;
	}
	cout << ans;
	return 0;
}