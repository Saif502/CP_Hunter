#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[3];
	cin>>n>>a[0]>>a[1]>>a[2];
	sort(a,a+3);

	int x=n/a[0],ri=0,rim=0,ans=0,y=0;
	if(n%a[0])x--,ri=(n%a[0]);
	
	for(int i=x;i>=1;i--){
		ri+=a[0];rim=0;
		if(ri%a[1] && ri<a[1]){
			y=ri/a[1];rim=ri;
			for(int i=y;i>=1;i--){
				if(rim<a[2]  )
				
			}
		}
		else if(ri%a[1]==0){
			ans=i+(ri/a[1]);
			cout<<ans<<'\n';
			return 0;
		}
	}
}
//if(n%a[0]==0){cout<<n/a[0]<<'\n';return 0;}
