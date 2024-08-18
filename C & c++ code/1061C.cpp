// Problem: C. Multiplicity
// Contest: Codeforces - Codeforces Round 523 (Div. 2)
// URL: https://codeforces.com/contest/1061/problem/C
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define         ll             long long int
#define         F                first
#define         S                second
#define         MOD              1000000007
#define       i_for(a,n)       for(ll i=a;i<n;i++)
#define       j_for(a,n)       for(ll j=a;j<n;j++)
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       pb               push_back
#define       nl               cout<<endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)
#define       endl             '\n'
#define       start()          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);

using namespace std;

const int N=1e6+5;
ll dp[N];
vector<vector<ll>>v;

int main()
{
    start() 
    ll n;
    cin>>n;
    ll x[n+5];
    ll mx=0;
    dp[0]=1;
    for(ll i=1; i<=n; i++)
    {
    	cin>>x[i];
        ll nn=x[i];
        vector<ll>s;
        for (int j=1; j<=sqrt(nn); j++) 
		{ 
		    if (nn%j == 0) 
		    { 
		        if (nn/j == j)s.pb(j); 
		        else s.pb(j),s.pb(nn/j);     
		    } 
		}
	
		reverse(all(s));
		for(auto it: s)dp[it]+=dp[it-1],dp[it]%=MOD;
		v.pb(s);	
    }
    ll ans=0;
    for(ll i=1; i<=n; i++)ans+=dp[i],ans%=MOD;
    
    cout<<ans<<endl;
    
}