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

const int N=1e5+5;

int spf[N];

#define  M  1000000
bool num[M];
vector<ll>prime;

// prime genarate
void isPrime()
{
	ll n=10000000;
    num[2]=true;
    ll s=sqrt(n)+1;
    for(ll i=3; i<=s; i+=2)
    {
        if(num[i]==false)
            for(ll j=i*i; j<=n; j+=i+i)
                num[j]=true;
    }
    prime.pb(2);
    for(ll i=3; i<=n; i+=2)
    {
        if(num[i]==false)prime.pb(i);
    }
}


// Eauler's phi function
void phi(int n) {
    vector<int> phi(n + 1);
    for (int i = 0; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
    i_for(1,n+1)
    {
    	cout<<phi[i]<<endl;
    }
}


// count number_of_divisor
long long NOD(long long n) {
    int root=sqrt(n);
    long long ret=1;
    for(int i=0; i<prime.size() && prime[i]<=root; i++) {
        if(n%prime[i]==0) {
            int cnt=1;
            while(n%prime[i]==0) {
                cnt++;
                n/=prime[i];
            }
            cout<<prime[i]<<" cnt  "<<cnt<<endl;
            ret*=cnt;
            root=sqrt(n);
        }
    }
    if(n>1)
        ret*=2;
    return ret;
}

// genarel form of prime factor(2-n)
void prime_2_N(ll n)
{
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
    for(auto it: mp)cout<<it.F<< "^"<< it.S<<" * ";
	
}

    
    
// prime factor using SPF
void SPF()
{
	for(int i=2; i<N; i++)
    {
    	spf[i]=i;
    }
    for(int i=2; i<N; i++)
    {
    	for(int j=i; j<N; j+=i)
    	{
    		spf[j]=min(spf[j],i);
    	}
    }
    
    int q;
    cin>>q;
    while(q--)
    {
    	ll n;
    	cin>>n;
    	vector<int>v;
    	while(n>1)
    	{
    		v.pb(spf[n]);
    		//cout<<spf[n]<<endl;
    		n/=spf[n];
    		
    	}
    	for(auto it: v)cout<<it<<" ";
    	nl;
    	nl;
    }
    	
}
    
int main()
{
    start() 
    //SPF();
    //prime_2_N(6);
    isPrime();
    NOD(30);

}