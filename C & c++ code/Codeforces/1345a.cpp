#include <bits/stdc++.h>
using namespace 2std;
int main()
{
	int T,n,m;
	cin>>T;
	while(T--){
		cin>>n>>m;
		if(n==1) cout<<"YES\n";
		else if(m==1)cout<<"YES\n";
		else if(n==2&&m==2)cout<<"YES\n";
		else cout<<"NO\n";
	}
}
