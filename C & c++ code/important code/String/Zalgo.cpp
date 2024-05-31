// Problem: D - Getup 04
// Contest: Virtual Judge - Weekly Contest 05
// URL: https://vjudge.net/contest/561028#problem/D
// Memory Limit: 512 MB
// Time Limit: 1000 ms

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

 
/*vector<int> lps(1000000);
 
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
}*/

void z(string s)
{
	ll n= s.size();
	vector<ll>z(n,0);
	ll x=0, y=0;
	
	for(ll i=1; i<n; i++)
	{
		ll mi=min(z[i-x],y-i+1);
		z[i] = max(0ll,mi);
		while(i+z[i] < n && s[z[i]] == s[i+z[i]])
		{
			x=i; 
			y=i+z[i];
			z[i]++;
		}
		if(i+z[i]==n)cout<<i<<" ";
	}
	cout<<n<<endl;
	//for(auto it: z)cout<<it<<" ";
	nl;
}
	
int main()
{
    start() 
   
	string s;
    cin>>s;
    ll sz=s.size();
    z(s);

}