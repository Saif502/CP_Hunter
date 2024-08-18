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
    ll n ;
    cin>>n;
    ll x[n+1];
    for(ll i=1; i<=n; i++)cin>>x[i];
    
    ll dp[n+5]={0},z=INT_MAX,z1=INT_MAX;
    ll ans=0;
    
    //dp[1]=x[1];
    for(ll i=2; i<=n; i++)
    {
    	z=dp[i-1]+abs(x[i]-x[i-1]);
    	if(i>2)
    	z1=dp[i-2]+abs(x[i]-x[i-2]);
    	dp[i]=min(z,z1);
    	//cout<<dp[i]<<endl;
    }
    
    cout<<dp[n]<<endl;
}