// Problem: Chef and Queries
// Contest: CodeChef - COOK65
// URL: https://www.codechef.com/problems/CHEFQUE
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define         ll             long long int
#define         F                first
#define         S                second
#define         MOD              (1ll<<32)
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

const ll N = (1ll << 32)+5;
bitset<N>bit;

int main()
{
    start() 
    
    ll n,s,a,b;
    cin>>n>>s>>a>>b;
    ll x=(s/2);
    ll sum=0;
    if(s&1) sum = x,bit[x]=1;
    
    for(ll i=1; i<n; i++)
    {
    	ll ss=(s* a + b)%MOD;
    	ll z=ss/2;
    	
    	if(ss&1)
    	{
    		if(!bit[z])sum+=z,bit[z]=1;
    	}
    	else 
    	{
    		if(bit[z])bit[z]=0,sum-=z;
    	}
    //cout<<ss<<" "<<z<<" "<<sum<<endl;
    	s=ss;
    }
    cout<<sum<<endl;
    

}