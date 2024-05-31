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
bool vis[1000050];
int level[1000050];

bool dfs(int vertex,int par)
{
	bool isloop=false;
	vis[vertex]=true;
	//cout<<vertex<<endl;
	for(int child: g[vertex])
	{
		//cout<<"par "<<par<<" "<<"child "<<child<<endl;	
		
		if(vis[child]==true && par==child)continue;
		if(vis[child])return true;
		isloop |= dfs(child,vertex);
		
		//cout<<"par "<<par<<" "<<"child "<<child<<endl;	
		//cout<<isloop<<endl;
	}
	return isloop;
}

int main()
{
	    int n,m;
	    cin>>n>>m;
	    int c=0;
	    for(i=0; i<m; i++)
	    {
	    	int x,y;
	    	cin>>x>>y;
	    	g[x].pb(y);
	    	g[y].pb(x);
	    }
	    c=0;
	    for(i=1; i<=n; i++)
	    {
	    	if(vis[i])continue;
	    	if(dfs(i,0))
	    	{
	    		c=1;
	    		break;
	    	}
	    }
	    cout<<c<<endl;
 
}