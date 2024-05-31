#include<bits/stdc++.h>

typedef       long long int       ll;
typedef      unsigned long long   ull;
#define         F                first
#define         S                second
#define         MOD              1000000007
#define         MOD1             1000000007
#define         maxn              999999
#define       i_for(a,n)       for(ll i=a;i<=n;i++)
#define       j_for(a,n)       for(ll j=a;j<=n;j++)
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       pb               push_back
#define       nl               cout<<endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)
#define       endl             '\n'
#define       start()          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);

using namespace std;

ll p[maxn],p1[maxn],Hash[maxn],revHash[maxn],base=7951,base1=337;
map<ll,ll>mp,mp1;

void prework()
{
    p[0]=p1[0]=1;
    for(ll i = 1; i <=999990; i++)
    {
        p[i] = (p[i-1] * base) % MOD;
        p1[i] = (p1[i-1] * base1) % MOD1;
    }
}

int main()
{
    start() 
    prework();
    
    ll n,m;
    cin>>n>>m;
    while(n--)
    {
    	string s;
    	cin>>s;
    	ll z=s.size();
    	ll fr=0;
    	for(ll i=0; i<z; i++)
    	{
    		fr +=((s[i]-'a')*p[i]) % MOD;
    	}
    	mp1[fr]++;
    	for(ll i=0; i<z; i++)
    	{
    		//cout<<fr-(s[i]-'a')*p[i]<<endl;
    		mp[(fr - ((s[i]-'a') * p[i])) % MOD]++;
    	}
    }
    ll ans=0;
    for(auto x: mp)
    {
    	//cout<<x.F<<" "<<x.S<<endl;
    	ans += (x.second * (x.second-1))/2ll;
    }
    /*for(auto x: mp1)
    {
    	//cout<<x.F<<" "<<x.S<<endl;
    	ans -= (x.second * (x.second-1))/2ll * m;
    }*/
    cout<<ans<<endl;
    
    
}