#include<iostream>
#include<cstring>
#include<queue>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<sstream>
#include<set>
#include<time.h>
#include<stdlib.h>
#include<unordered_map>
#define ll long long
#define ull unsigned long long
#define eps 1e-10
#define INF 1e9
#define delta 0.996
#define T 3000
#define pi acos(-1.0)
#define ld long double
using namespace std;
const ll modd=1e9+7;
const ll mod2=998244353;
const int maxn=5e3+10;
const int maxm=1e6+10;
const ll inf=1e18L;
typedef pair<int,int>P;
int n,ans=-1,x,y;
int main()
{
    cin>>n;
    cin>>x>>y;
    cout<<min(x+y,x&y)<<endl;
    //cout<<ans<<endl;
    return 0;
}
