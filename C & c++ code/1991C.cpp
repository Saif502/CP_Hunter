// Problem: C. Absolute Zero
// Contest: Codeforces - Pinely Round 4 (Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/1991/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
      ll x[n];
      ll mx=0, mn= 1e9+9;
      for(ll i=0; i<n; i++)cin>>x[i],mx=max(mx,x[i]), mn=min(mn,x[i]);
      

      vector<ll>v;
      ll k=40;
      while(k--)
      {
      	if(mn==0 and mx==0)break;
      	ll z=(mx+mn)/2;
      	v.pb(z);
      	mx=0, mn= 1e9+9;
      	for(ll i=0; i<n; i++)
	    {
      		x[i]=abs(x[i]-z);
      		mx=max(mx,x[i]);
      		mn=min(mn,x[i]);
	    }
	    
      	
      }
      	
      if(k<0)
      {
      	cout<<"-1"<<endl;
      	continue;
      }
      cout<<v.size()<<endl;
      for(ll i=0; i<v.size(); i++)
      	{
      		cout<<v[i]<<" ";
      	}
      	nl;
      	
    }

}