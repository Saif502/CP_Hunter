// Problem: Intelligent Factorial Factorization
// Contest: LightOJ
// URL: https://lightoj.com/problem/intel-factor-factorization
// Memory Limit: 64 MB
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

const int N=10e6;

int spf[N];
    
int main()
{
    start() 
    
    ll t,tt=1;
    cin>>t;
    while(t--)
    {
    	ll n,k=0;
	    cin>>n;
	    map<ll,ll>mp;
	    for(ll j=n; j>=2; j--)
	    {
	      ll z=j;
	      vector<ll>v;
		  for(ll i=2; i*i<=j; i++)
		    {
		    	if(z%i==0)
		    	{
		    		while(z%i==0)
		    		{
		    			mp[i]++;
		    			z/=i;
		    		}
		    	}
		    }
		    if(z>1)mp[z]++;
	    	
	    }
	    cout<<"Case "<<tt++<<": "<<n<<" = ";
	    for(auto it: mp)
	    {
	    	k++;
	    	cout<<it.F<< " ("<< it.S<<")";
	    	if(k<mp.size())cout<<" * ";
	    }
	    nl;
    }
    
}