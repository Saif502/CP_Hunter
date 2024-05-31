//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
#define         ll             long long int
#define         F                first
#define         S                second
#define         MOD              1000000007
#define       i_for(a,b)       for(ll i=a;i<b;i++)
#define       j_for(a,b)       for(ll j=a;j<b;j++)
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

ll m,n,c=0,k=0,a=0,b=0,temp;
ll i,j;

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll sum=0,ans=0;
    cin>>n>>k;
    ll x[n];
    i_for(0,n)cin>>x[i];
    vector<vector<ll>>All;
    
    for(int mask=0; mask<(1<<n); mask++)
    {
    	sum=0;
    	vector<ll>temp;
    	for(int i=0; i<n; i++)
    	{
    		if((mask>>i)&1)
    		{
    			temp.pb(x[i]);
    			//cout<<x[i]<<" ";
    			//sum+=x[i];
    		}
    	}
    	if(temp.size()!=0)
    	sort(all(temp));
    	All.pb(temp);
    	//nl;
    	//if(sum==k)ans++;
    }
    sort(all(All));
    cout<<All.size()<<endl;
    /*for(auto it: All)
    {
    	for(auto z: it)cout<<z<<" ";
    	nl;
    }*/

}