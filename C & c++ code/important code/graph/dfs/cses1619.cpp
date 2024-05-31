// Problem: Restaurant Customers
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1619
// Memory Limit: 512 MB
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
    
    vector<pair<ll,ll>>p;
    set<ll>s;
    
    while(t--)
    {
    	ll a,b;
    	cin>>a>>b;
        p.pb({a,b});
        s.insert(a);
        s.insert(b); 
    }
    map<ll,ll>mp,np;
   
    for(auto itt: p)
    {
    	mp[itt.F]++;
    	mp[itt.S]--;
    }
    ll sum=0,mx=0;
    for(auto it: mp)
    {
    	//cout<<it.S<<endl;
    	sum+=it.S;
    	mx=max(mx,sum);
    }
    cout<<mx<<endl;
}