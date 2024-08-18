// Problem: B - Ab 2
// Contest: Virtual Judge - FSI Contest 02
// URL: https://vjudge.net/contest/630265#problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
#define         ll             long long int
#define         F                first
#define         S                second
#define         MOD              998244353
#define       i_for(n)         for(ll i=0;i<n;i++)
#define       j_for(n)         for(ll j=0;j<n;j++)
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       pb               push_back
#define       nl               cout<<endl
#define       upd(n)           cout<< fixed << setprecision(10) <<(n)<< endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)

#define       min_heap         priority_queue <ll, vector<ll>, greater<ll> >
#define       Ex()             cerr<<"[Execution : "<<(1.0*clock())/CLOCKS_PER_SEC<<"s]"<<endl
//#define     ordered_set     tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> 
 //order_of_key,find_by_order
   
using namespace std;

//ll m,n,c=0,k=0,a=0,b=0,temp;
ll i,j;
const int N=2e5+10;
int parant[N];
int siz[N];


int find(int v)
{
	if(v==parant[v])return v;
	return parant[v]=find(parant[v]);
}

void Union(int a, int b)
{
	a=find(a);
	b=find(b);
	if(a!=b)
	{
		if(siz[a] < siz[b])swap(a,b);
		parant[b] = a;
		siz[a]+=siz[b];
	}
}

ll bigmod(ll a, ll b){
	if(!b) return 1;
	if(b & 1){
		return bigmod(a, b - 1) * a % MOD;
	}
	ll x= bigmod(a, b / 2);
	return (x * x) % MOD;
}
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll t,tt=1;
    cin>>t;
    while(t--)
    {
    	    	
	    ll n,k;
	    cin>>n>>k;
	    //cout << n << ' ' << k << '\n';
	    pair<ll,ll>vertex[n],edge[n];
	    for(i=1; i<n; i++)
	    {
	    	cin >> vertex[i].F >> vertex[i].S;
	    	edge[i].S=i;
	    	cin>>edge[i].F;
	    	
	    	
	    }
	    
	    sort(edge+1,edge+n);
	    
	    for(ll i = 0; i <=n; i++){
	    	parant[i]=i;
	    	siz[i]=1;
	    }
	   
	    
	    ll ans=1;	    
	    
	    for(ll i=1; i<n; i++)
	    {
	    	ll idx=edge[i].S;
	    	ll w=edge[i].F;
	    	ll u=find(vertex[idx].F);
	    	ll v=find(vertex[idx].S);
	    	//	`cout << w << ' ' << k-w+1 << ' ' << (siz[u] * siz[v]) - 1 << '\n';
	    	ans=(ans* bigmod(k-w+1, siz[u]*siz[v]-1)) % MOD;
	    	ans = (ans + MOD) % MOD;
	    	Union(u,v);
	    }
	    
	    cout<<ans<<endl;
    
    }
    
}