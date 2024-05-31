//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
/*
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
 
ll a,b,c,k;
const ll mx=10e6+99;
ll x[mx],n;
bool solve(ll k)
{
	ll sum=k;
    i_for(0,n-1)
    {
    	sum+=x[i];
    	if(sum<1)return false;
    }
    return true;
}
int main()
{
    start() 
    ll t,tt=1;
    cin>>t;
    while(t--)
    {
       cin>>n;
       i_for(0,n-1)cin>>x[i];
       ll l=1,r=10e14;
       ll ans=-1;
       while(l<=r)
       {
       	 ll mid=(l+r)/2;
       	 if(solve(mid))
       	 {
       	 	ans=mid;
       	 	r=mid-1;
       	 }
       	 else l=mid+1;
       }
       cout<<"Scenario #"<<tt++<<": "<<ans<<endl;
    }
 
}
*/
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
 
ll a,b,c,k;
const ll mx=10e6+99;
ll x[mx],n;
bool solve(ll k)
{
	ll sum=k;
    i_for(0,n-1)
    {
    	sum+=x[i];
    	if(sum<1)return false;
    }
    return true;
}
int main()
{
    start() 
    ll t;
    cin>>t;
    while(t--)
    {
       cin>>n;
       i_for(0,n-1)cin>>x[i];
       ll l=0,r=10e14;
       ll ans=-1;
       while(l<=r)
       {
       	 ll mid=(l+r)/2;
       	 if(solve(mid))
       	 {
       	 	ans=mid;
       	 	r=mid-1;
       	 }
       	 else l=mid+1;
       }
       cout<<ans<<endl;
    }
 
}