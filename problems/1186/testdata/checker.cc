#include "testlib.h"
#include<bits/stdc++.h>
using namespace std;

int a[2222222];
std::deque<int> q[333];

int main(int argc, char * argv[]) {
    setName("meow");
    registerTestlibCmd(argc, argv);

    int T;
    T = inf.readInt();
	while(T--){
		int n,m,k;
        n = inf.readInt();
        m = inf.readInt();
        k = inf.readInt();
		for(int i=1;i<=m;++i){
            a[i] = inf.readInt();
		}
		int now=1;
		int op;
        op = ouf.readInt();
		if(op<m||op>2*m){
            quitf(_wa, "Wrong Answer");
		}
		for(int i=1;i<=op;++i){
			int v,s1,s2;
            v = ouf.readInt();
			if(v==1){
                s1 = ouf.readInt();
				if(s1<=0||s1>n){
					quitf(_wa, "Wrong Answer");
				}
				if(now<=m){
					if(!q[s1].empty()&&a[now]==q[s1].back()){
						q[s1].pop_back();
					}
					else{
						q[s1].push_back(a[now]);
					}
					++now;
				}
			}
			else if(v==2){
                s1 = ouf.readInt();
                s2 = ouf.readInt();
				if(s1<=0||s1>n||s2<=0||s2>n||s1==s2){
					quitf(_wa, "Wrong Answer");
				}
				if(!q[s1].empty()&&!q[s2].empty()&&q[s1].front()==q[s2].front()){
					q[s1].pop_front();
					q[s2].pop_front();
				}
			}
			else quitf(_wa, "Wrong Answer");
		}
		if(now<=m){
			quitf(_wa, "Wrong Answer");
		}
		for(int i=1;i<=n;++i){
			if(q[i].size()){
				quitf(_wa, "Wrong Answer");
			}
		}
	}
	quitf(_ok, "Right Output!!!");
}
/* modify from meow_e.cpp by 33DAI*/