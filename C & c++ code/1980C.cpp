// Problem: C. Sofia and the Lost Operations
// Contest: Codeforces - Codeforces Round 950 (Div. 3)
// URL: https://codeforces.com/contest/1980/problem/C
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
        cin >> n;
        ll x[n], y[n];
          map<ll,ll>mp,mp1;
        for (int i = 0; i < n; ++i) cin >> x[i];
        for (int i = 0; i < n; ++i) 
        {
        	cin >> y[i];
        	if(x[i]!=y[i])mp[y[i]]++;
        }
        
        ll m;
        cin >> m;
        ll q[m];
        for(ll i=0; i<m; i++)cin>>q[i],mp1[q[i]]++;
        
        bool c=true;
        
        for(ll i=0; i<n; i++)
        {
        	if(x[i]!=y[i])
        	{
        		if(!mp1[y[i]]){c=false; break;}
        		else
        		{
        			 mp1[y[i]]--;
        		}
        	}
        	
        }
        if (!mp[q[m - 1]]) {
	        bool ok = 0;
	        for (int i = 0; i < n; i++) {
	            if (x[i] == y[i] && x[i] == q[m - 1]) {
	                ok = 1;
	            }
	        }
	        if (!ok) {
	           no;
	           continue;
	        }
	    }
        
        if(c)yes;
        else no;
      
    }

}