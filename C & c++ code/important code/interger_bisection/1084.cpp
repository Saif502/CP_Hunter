// Problem: Apartments
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1084
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
ll n,m,k;
vector<ll>x;
bool binary_src(ll xx)
{
	ll L=1,R=x.size();
    while(L<=R)
    {
    	ll mid=(L+R)/2;
    	
    	if(x[mid]==xx)
    	{
    		return true;
    	}
    	else if(x[mid]<xx)
    	{
    		L=mid+1;
    	}
    	else R=mid-1;
    	//cout<<mid<<endl;
    }
    return false;
}
int main()
{
    start() 
    cin>>n>>m>>k;
    ll x1[n];
    map<ll,ll>mp;
    i_for(0,n)
    {
    	cin>>x1[i];
    }
    i_for(0,m)
    {
    	ll p;
    	cin>>p;
    	x.pb(p);
    	x.pb(p-k);
    	x.pb(p+k);
    	mp[p]++;
    	mp[p-k]++;
    	mp[p+k]++;
    }
    sort(all(x));
    
    ll ans=0;
    i_for(0,n)
    {
    	if(binary_src(x1[i])==true && mp[x1[i]]>0)
    	{
    		//cout<<x1[i]<<endl;
    		ans++;
    		mp[x1[i]]--;
    	}
    }
    cout<<ans<<endl;
    
}