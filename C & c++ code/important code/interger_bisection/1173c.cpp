// Problem: C. Nauuo and Cards
// Contest: Codeforces - Codeforces Round #564 (Div. 2)
// URL: https://codeforces.com/contest/1173/problem/C
// Memory Limit: 256 MB
// Time Limit: 1500 ms

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
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
//#define     ordered_set     tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> 
//order_of_key,find_by_order
   
using namespace std;

ll m,n,c=0,k=0,a=0,b=0,temp;
ll i,j;

int main()
{
   start() 
    cin>>n;
    ll x[n+5],y[n+5],idx[n+5]={0},pos=0;
    i_for(1,n)
    {
    	cin>>x[i];
    }
    i_for(1,n)
    {
    	cin>>y[i];
    	idx[y[i]]=i;
    	if(y[i]==1)pos=i;
    }
    ll L=pos,R=n,ans=0;
    while(L<=R)
    {
    	ll mid=(L+R)/2,check=1;
    	i_for(1,n)
    	{
    		if(idx[i]-mid>=i)
    		{
    			check=0;
    			break;
    		}
    	}
    	if(check)
    	{
    		R=mid-1;
    		ans=mid+n;
    	}
    	else L=mid+1;
    	
    }
    if(idx[1]){
    	ll ok = 1;
    	for(ll i = 1; i <= n; i++){
    		if(idx[1] + i == idx[i] + 1) continue;
    		if((idx[i] - (idx[1] - 1)) > i - n - 1){
    			ok = 0;
    			break;
    		}
    	}
    	if(ok) ans = idx[1] - 1;
    }
    cout<<ans<<endl;
}