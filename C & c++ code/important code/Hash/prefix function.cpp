#include<bits/stdc++.h>
#define         ll             long long int
#define         F                first
#define         S                second
#define         MOD              1000000007
#define       i_for(a,n)       for(ll i=a;i<=n;i++)
#define       j_for(a,n)       for(ll j=a;j<=n;j++)
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       pb               push_back
#define       nl               cout<<endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)
#define       endl             '\n'
#define       start()          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);

using namespace std;

 
 vector<int> lps(1000000);
 
 void prefix_function(string pat){
		lps[0]=0;
		int m=pat.size();
		for(int i=1;i<m;i++){
			int j=lps[i-1];
	        while(j>0 && pat[i]!=pat[j])
	            j = lps[j-1];
	        if (pat[i]==pat[j])  ++j;
	        lps[i]=j;
		}
		//return lps;
	}
	
int main()
{
    start() 
    
    string s,t;
    cin>>s>>t;
    string p=t;
    t+="#";
    t+=s;
   // cout<<t<<endl;
    prefix_function(t);
    ll ans=0;
   for(ll i=0; i<t.size(); i++)
   {
   	if(lps[i]==p.size())ans++;
   }
   cout<<ans<<endl;
   

}