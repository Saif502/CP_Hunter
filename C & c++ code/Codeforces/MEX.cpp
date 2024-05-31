#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wformat"
#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<map>
#include<vector>
#include<iterator>
#include<string.h>
#define         ll             long long int
#define         ld               long double
#define         F                first
#define         S                second
#define       i_for(n)         for(ll i=0;i<n;i++)
#define       ri_for(n)        for(ll i=n-1;i>=0;i--)
#define       for_i(n)         for(ll i=1;i<=n;i++)
#define       j_for(n)         for(ll j=0;j<n;j++)
#define       rj_for(n)        for(ll j=n-1;j>=0;j--)
#define       for_j(n)         for(ll j=1;j<=n;j++)
#define       FOR(a, b)        for (ll i = (a); i <= (b); i++)
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       Srt(a)           sort(all(a))
#define       rev(a)           reverse(all(a))
#define       srt(a,n)         sort(a,a+n)
#define       sqr(x)           pow(2,x)
#define       max2(a,b)        max(a,b)
#define       min2(a,b)        min(a,b)
#define       max3(a,b,c)      max(a,max(b,c))
#define       min3(a,b,c)      min(a,min(b,c))
#define       pb               push_back
#define       ci(n)            cin>>n
#define       ot(n)            cout<<n<<endl
#define       nl               cout<<endl
#define       lrg(x,y)         ((x+y-1)/y)
#define       upd(n)           cout<< fixed << setprecision(10) <<(n)<< endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)
#define       Ex()             cerr<<"[Execution : "<<(1.0*clock())/CLOCKS_PER_SEC<<"s]"<<endl

using namespace std;

ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,sum=0;
ll i,j;
int maxMEX(ll arr[], ll N, ll K)
{
	set<int> s;
	for (int i = 1; i <= N + 1; i++)
		s.insert(i);
	for (int i = 0; i < K; i++)
		s.erase(arr[i]);
	int mex = *(s.begin());
	cout<<mex<<" ";
	for (int i = K; i < N; i++) {
		s.erase(arr[i]);
		s.insert(arr[i - K]);
		int firstElem = *(s.begin());
		//mex = max(mex, firstElem);
		//mex+=firstElem;
		cout<<firstElem<<" ";
	}
	nl;
	return mex;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	ll x[n];
    	c=0,k=0;
    	i_for(n)cin>>x[i];
    	maxMEX(x, n, 3);
    	/*for(i=1; i<=n; i++)
    	{
    		k+=(n-i+1);
    		c+=maxMEX(x, n, i);
    	}
    	cout<<c<<" "<<k<<" ";
    	cout<<c+k<<endl;*/

    }

}