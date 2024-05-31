//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<map>
#include<vector>
#include<iterator>
#include<string.h>
#define         ll             long long int
#define         F                first
#define         S                second
#define         mp               make_pair
#define         MOD              1000000007
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       Srt(a)           sort(all(a))
#define       rev(a)           reverse(all(a))
#define       max3(a,b,c)      max(a,max(b,c))
#define       min3(a,b,c)      min(a,min(b,c))
#define       pb               push_back
#define       nl               cout<<endl
#define       lrg(x,y)         ((x+y-1)/y)
#define       upd(n)           cout<< fixed << setprecision(10) <<(n)<< endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)
#define       min_heap         priority_queue <ll, vector<ll>, greater<ll> >
//#define     ordered_set     tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> 
 //order_of_key,find_by_order
   
using namespace std;

ll MAX=0,MIN=999999999,sum=0;
ll i,j;
vector<int>g[100005];
int depth[1000005];
int height[1000005];
// no need vis array for dfs tree cause it has no loop and pass the parents
int vis[1000050];
//int level[1000050];

void dfs(int vertex, int par=0)
{
	for(int child: g[vertex])
	{
		//cout<<"par "<<vertex<<" "<<"child "<<child<<endl;
		if(child==par)continue;
		depth[child]=depth[vertex]+1;
		dfs(child, vertex);	
		//height[vertex]=max(height[vertex],height[child]+1);
	}
	
}

int main()
{
	int n;
    cin>>n;
    for(i=0; i<n-1; i++)
    {
    	int x,y;
    	cin>>x>>y;
    	g[x].pb(y);
    	g[y].pb(x);
    }
    dfs(1);
    ll mx=-1,node;
    for(i=1; i<=n; i++)
    {
    	if(depth[i]>mx)mx=depth[i],node=i;
    	depth[i]=0;
    }
    dfs(node);
    ll z=*max_element(depth,depth+n);
    cout<<z<<endl;
    
 
}