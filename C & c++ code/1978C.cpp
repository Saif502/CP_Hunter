// Problem: C. Manhattan Permutations
// Contest: Codeforces - Codeforces Round 953 (Div. 2)
// URL: https://codeforces.com/contest/1978/problem/C
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
    ll p=2*1e5;
   
    while(t--)
    {
      ll n,m;
      cin>>n>>m;
      
      ll odd=0,even=0;
	  ll mp;
	  vector<ll>v;
	  for(ll i=1; i<=n; i++)
	    {
	       v.pb(n-i+1);
	    	
	       if(i%2)odd+=i;
	       else even+=i;
	    
	    }  
	    if(n%2)mp=even*2;
	    else mp=odd*2;
	    //cout<<even<<" "<<odd<<endl;
      
      if(m%2 || m>mp){
      	no;
      	continue;
        }
    
      yes;
      ll z=m/2;
      if(z<n)
      {
	      ll c=0,k=0,d=0;
	      for(ll i=1; i<=n; i++)
	      {
	      	if(!d and i+z<=n){cout<<i+z<<" ";d=i;}
	      	else if(i>=z && (i-z)==d)cout<<d<<" ";
	      	else cout<<i<<" ";
	
	      }
      	
      }
      else
      {
      	ll x=n-1;
      	//cout<<x<<endl;
      	reverse(all(v));
      	for(ll i=0; i<v.size(); i++)
      	{
      		if(z<=x)
      	    {
      	    	swap(v[i],v[i+z]);
      	    	z=0;
      	    	break;
      	    }
      	    swap(v[i],v[i+x]);
      	    z-=x; 
      	    x=x-2;
      	    if(x<=0){break;}
      	}
      	for(auto it: v)cout<<it<<" ";
      	
      }
     
      nl;
      
    }

}