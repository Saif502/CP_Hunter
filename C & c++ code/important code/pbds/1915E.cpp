// Problem: F. Greetings
// Contest: Codeforces - Codeforces Round 918 (Div. 4)
// URL: https://codeforces.com/contest/1915/problem/F
// Memory Limit: 256 MB
// Time Limit: 5000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
#define         ll             long long int
#define         F                first
#define         S                second
#define         MOD              1000000007
#define       i_for(a,n)       for(ll i=a;i<=n;i++)
#define       j_for(a,n)       for(ll j=a;j<=n;j++)
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       pb               push_back
#define       nl               cout<<endl
#define       upd(n)           cout<< fixed << setprecision(10) <<(n)<< endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)
#define       endl             '\n'
#define       min_heap         priority_queue <ll, vector<ll>, greater<ll> >
#define       Ex()             cerr<<"[Execution : "<<(1.0*clock())/CLOCKS_PER_SEC<<"s]"<<endl
#define       start()          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define     ordered_set        tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> 
//order_of_key,find_by_order
   
using namespace std;
using namespace __gnu_pbds;

ll m,n,c=0,k=0,a=0,b=0,temp;
ll i,j;

int main()
{
    start() 
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	
    	vector<pair<ll,ll>>v;
    	ordered_set s;
    	
    	for(ll i=0; i<n; i++)
    	{
    		ll a,b;
    		cin>>a>>b;
    		v.pb({a,b});
    		s.insert(a);
    	}
    	sort(all(v),[&](pair<ll,ll>a,pair<ll,ll>b){
    		return a.S<b.S;
    	});
    	
    	ll ans=0;
    	for(auto it: v)
    	{
    		ll z=s.order_of_key(it.F);
    		ans+=z;
    		s.erase(s.find_by_order(z));
    	}
    	cout<<ans<<endl;
      
    }

}
