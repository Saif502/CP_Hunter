// Problem: C1. Magnitude (Easy Version)
// Contest: Codeforces - Codeforces Global Round 26
// URL: https://codeforces.com/contest/1984/problem/C1
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
		vector<ll>a(n+1);
		ll x[n+1]={0};
		ll xx[n+1]={0};
		
		for(ll i=1; i<=n; i++)
		{
		        cin>>a[i];
		        xx[i]=xx[i-1]+a[i];
		        x[i]=max(x[i-1]+a[i],abs(xx[i-1]+a[i]));
		}
		cout<<x[n]<<endl;

      
    }

}