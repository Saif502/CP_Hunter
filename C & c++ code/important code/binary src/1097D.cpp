// Problem: D. Jumping Through Segments
// Contest: Codeforces - Codeforces Round 913 (Div. 3)
// URL: https://codeforces.com/contest/1907/problem/D
// Memory Limit: 256 MB
// Time Limit: 5000 ms
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
    	ll x[n],y[n];
    	ll mx=0;
    	for(ll i=0; i<n; i++)
    	{
    		cin>>x[i]>>y[i];
    		mx=max(mx,max(x[i],y[i]));
    	}
    	
    	
    	ll l=0,r=mx,mid=0,ans=0;
    	
    	while(l<=r)
    	{
    		mid = (l+r)/2;
    		
    		ll left=0,right=0,c=1;
    		
    		for(ll i=0; i<n; i++)
    		{
    			left = max(x[i],left-mid);
    			right = min(y[i],right+mid);
    			
    			if(left>right){c=0; break;}
    		}
    		
    		if(c)
    		{
    			r=mid-1;
    			ans=mid;
    		}
    		else l=mid+1;
    	}
    	
    	cout<<ans<<endl;
      
    }

}