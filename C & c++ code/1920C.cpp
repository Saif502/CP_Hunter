// Problem: C. Partitioning the Array
// Contest: Codeforces - Codeforces Round 919 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1920/C
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
		for(ll i=0; i<n; i++)cin>>x[i];
		vector<ll>s;
		for (int j=1; j<=sqrt(n); j++) 
		{ 
		    if (n%j == 0) 
		    { 
		        if (n/j == j)s.pb(j); 
		        else s.pb(j),s.pb(n/j);     
		    } 
		}
		
		ll ans=0;
		for(auto it: s)
		{
			ll gcd=0;
			for(ll j=0; j+it<n; j++)
			{
				gcd=__gcd(gcd,abs(x[j+it]-x[j]));
			}
			//cout<<gcd<<endl;
			if(gcd!=1)ans++;
		}
		cout<<ans<<endl;
		
		}

}