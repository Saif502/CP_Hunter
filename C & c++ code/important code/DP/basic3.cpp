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

const ll N=2e6+5;
ll step[N];


int main()
{
    start() 
   int t;
   cin>>t;
   while(t--)
   {
   	  memset(step, -1, sizeof step);
    
    ll n;
    cin>>n;
    step[0]=0;
    step[1]=0;
    
    for(ll i=2; i<=n; i++)
    {
    	ll ans=step[i-1]+1;
		if(i%2==0)ans=min(ans,step[i/2]+1);
		if(i%3==0)ans=min(ans,step[i/3]+1);
		//cout<<ans<<endl;
		step[i]=ans;
    }
    
    cout<<step[n]<<endl;
   }

}