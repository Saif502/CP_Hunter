// Problem: B. AGAGA XOOORRR
// Contest: Codeforces - Codeforces Round 717 (Div. 2)
// URL: https://codeforces.com/contest/1516/problem/B
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

int main()
{
    start() 
    ll t,tt=1;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll x[n+1];
    	ll sum[n+1]={0};
    	for(ll i=1; i<n+1; i++)
    	{
    		cin>>x[i];
    		sum[i]=sum[i-1]^x[i];
    		
    	}
    	//cout<<sum[n]<<endl;
    	bool ok= !sum[n];
    	
    	for(ll i=1; i<n-1; i++)
    	{
    		for(ll j=i+1; j<n; j++)
    		{
    			
    			ll x = sum[i];
    			ll y = sum[j]^x;
    			ll z = sum[n]^sum[j];
    			//cout<< ok << ' ' << x<<" "<<y<<" "<<z<<endl;
    			if(x==y && y==z)ok=true;
    		}
    		if(ok)break;
    	}
    	
    	if(ok)yes;
    	else no;
      
    }

}