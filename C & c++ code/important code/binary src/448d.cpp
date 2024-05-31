// Problem: D. Multiplication Table
// Contest: Codeforces - Codeforces Round 256 (Div. 2)
// URL: https://codeforces.com/problemset/problem/448/D?__cf_chl_tk=SKv20SPX5VJgzS5LVjmtg.gFpfgFrq8mx3ovaSIx0Gc-1703774365-0-gaNycGzNEVA
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
ll n,m,k;

ll solve(ll mid)
{
	ll sum=0;
	for(ll i=1; i<=n; i++)
	{
		sum+=min(m,mid/i);
	}
	return sum;
}
int main()
{
    start() 
    cin>>n>>m>>k;
    
    ll l=1, r=n*m, ans=0;
    while(l<=r)
    {
    	
    	ll mid=(l+r)/2;
    	if(solve(mid)<k)l=mid+1;
    	else 
    	{
    		r=mid-1;
    		ans=mid;
    	}
    }
    cout<<ans<<endl;
}